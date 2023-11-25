#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from proj_interfaces.msg import TurtleProj, TurtleProjArray

from proj_interfaces.srv import TurtleKill

import math


class ControllerNode(Node):

    _closest = True
    _pose = None
    _target_x = 0.0
    _target_y = 0.0
    _turtles_array = []
    _target_turtle = None

    def __init__(self):
        super().__init__("Controller_Node")
        self.get_logger().info("Controller Node Started!")

        # declaring params
        self.declare_parameter("closest", True)

        # setting params
        self._closest = self.get_parameter("closest").value

        # pose subscriber
        self.pose_subscription = self.create_subscription(
            Pose, "/turtle1/pose", self.callback_for_getting_pose, 10)

        # create kill turtlesim client
        self.kill_turtle_client = self.create_client(TurtleKill, "turtlekill")

        # turtlearray subscriber
        self.turtle_target_subscription = self.create_subscription(
            TurtleProjArray, "turtlearray", self.callback_for_getting_targets, 10)

        # cmd_vel publisher
        self.cmd_vel_publisher = self.create_publisher(
            Twist, "turtle1/cmd_vel", 10)
        self.create_timer(0.01, self.callback_to_publish_cmd_vel)

    def callback_for_getting_targets(self, msg):
        self._turtles_array = msg.turtles

        if self._closest:
            _closet_dist = math.sqrt(math.pow(
                (self._turtles_array[0].x - self._pose.x), 2)+ math.pow((self._turtles_array[0].y - self._pose.y), 2))
            self._target_turtle = self._turtles_array[0]
            for _temporary in self._turtles_array:
                _new_dist = math.sqrt(math.pow(
                    (_temporary.x - self._pose.x), 2)+ math.pow((_temporary.y - self._pose.y), 2))
                if _closet_dist > _new_dist:
                    self._target_turtle = _temporary
                    _closet_dist = _new_dist
        else:
            self._target_turtle = self._turtles_array[0]

        self._target_x = self._target_turtle.x
        self._target_y = self._target_turtle.y

    def callback_for_getting_pose(self, msg):
        self._pose = msg
        # self.get_logger().info(str(self._pose.x) + str(self._pose.y) + str(self._pose.theta) +
        #                        str(self._pose.linear_velocity)+str(self._pose.angular_velocity))

    def check_turtle_killed(self, future):
        try:
            future.result()
        except Exception as e:
            self.get_logger().error(str(e))

    def call_kill_turtle_srv(self):
        if self._target_turtle != None:
            kill_req = TurtleKill.Request()
            kill_req.name = self._target_turtle.name
            self._target_turtle = None
            future = self.kill_turtle_client.call_async(kill_req)
            future.add_done_callback(self.check_turtle_killed)

    def callback_to_publish_cmd_vel(self):

        if self._pose == None or len(self._turtles_array) < 1:
            return

        diff_x = self._target_x - self._pose.x
        diff_y = self._target_y - self._pose.y
        dist_to_trav = math.sqrt(diff_x * diff_x + diff_y * diff_y)
        diff_theta = math.atan2(diff_y, diff_x) - self._pose.theta

        twist_msg = Twist()
        # self.get_logger().info(str(diff_theta) + " " + str(dist_to_trav))
        if abs(diff_theta) < 0.3:
            if dist_to_trav < 0.5:
                # target reached
                twist_msg.linear.x = 0.0
                twist_msg.angular.z = 0.0
                # self.get_logger().info("Target reached!")
                self.call_kill_turtle_srv()
            else:
                twist_msg.linear.x = 2 * dist_to_trav
                twist_msg.angular.z = 6 * diff_theta
            pass
        else:
            twist_msg.angular.z = 6*diff_theta

        self.cmd_vel_publisher.publish(twist_msg)


def main():
    rclpy.init()
    controller_node = ControllerNode()
    rclpy.spin(controller_node)
    controller_node.destroy_node()
    rclpy.shutdown()


# subscribe to Turtlesim pose topic and get pose
# calculate goal and publish cmd vel
