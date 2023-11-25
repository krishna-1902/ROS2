#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from turtlesim.srv import Kill, Spawn
from std_srvs.srv import Empty
from proj_interfaces.msg import TurtleProj, TurtleProjArray
from proj_interfaces.srv import TurtleKill

import random
import math

class TurtleService(Node):

    _turtle_num = 2
    _turtle_proj_array = []

    def __init__(self):
        super().__init__("Turtle_Service")
        self.turtle_alive_publisher = self.create_publisher(TurtleProjArray, "turtlearray", 10)
        self.create_timer(2, self.create_client_for_spawn_service)
        self.turtle_kill_service = self.create_service(TurtleKill, "turtlekill", self.callback_to_kill_turtle)
        self.turtle_kill_client = self.create_client(Kill, "kill")
        self.turtle_clear_client = self.create_client(Empty, "clear")

    def call_turtlesim_kill_service(self, name):
        while not self.turtle_kill_client.wait_for_service(1.0):
            self.get_logger().warn('service not available...')
        req_kill = Kill.Request()
        req_kill.name = name
        future = self.turtle_kill_client.call_async(req_kill)
        future.add_done_callback(self.callback_to_turtlesim_kill_srv)

    def callback_to_turtlesim_kill_srv(self, future):
        try:
            reponse = future.result()
        except Exception as e:
            self.get_logger().error("Kill Service Failed...")

    def call_turtlesim_clear_service(self):
        while not self.turtle_clear_client.wait_for_service(1.0):
            self.get_logger().warn('service not available...')
        req_clear = Empty.Request()
        future = self.turtle_clear_client.call_async(req_clear)
        future.add_done_callback(self.callback_to_turtlesim_clear_srv)

    def callback_to_turtlesim_clear_srv(self, future):
        try:
            reponse = future.result()
        except Exception as e:
            self.get_logger().error("Kill Service Failed...")


    def callback_to_kill_turtle(self, request, response):
        _toremove = None
        for _temporary in self._turtle_proj_array:
            if _temporary.name == request.name:
                _toremove = _temporary
                break
        if _toremove != None:
            self._turtle_proj_array.remove(_toremove)
            self.call_turtlesim_kill_service(_toremove.name)
            self.call_turtlesim_clear_service()

        return response

    def create_client_for_spawn_service(self):
        self.client_spawn = self.create_client(Spawn, "spawn")
        # self.get_logger().info("node started")
        while not self.client_spawn.wait_for_service(1.0):
            self.get_logger().info("waiting for service...")
        # self.get_logger().info("connected to server")
        self.callback_spawn_turtle()

    def callback_spawn_turtle(self):
        req_spawn = Spawn.Request()
        req_spawn.x = random.uniform(1.0, 10.0)
        req_spawn.y = random.uniform(1.0, 10.0)
        req_spawn.theta = random.uniform(-math.pi, math.pi)
        req_spawn.name = "target_turtle" + str(self._turtle_num)
        self._turtle_num += 1

        future = self.client_spawn.call_async(req_spawn)
        future.add_done_callback(partial(self.callback_to_check_turtle_spawn, req_spawn=req_spawn))

    def callback_to_check_turtle_spawn(self, future, req_spawn):
        try:
            response = future.result()
            self.get_logger().info(str(response.name) + " spawned!")

            _turtle_proj = TurtleProj()
            _turtle_proj.x = req_spawn.x
            _turtle_proj.y = req_spawn.y
            _turtle_proj.theta = req_spawn.theta
            _turtle_proj.name = req_spawn.name
            self._turtle_proj_array.append(_turtle_proj)

            _turtle_array = TurtleProjArray()
            _turtle_array.turtles = self._turtle_proj_array
            self.turtle_alive_publisher.publish(_turtle_array)
        except Exception as e:
            self.get_logger().error("Failed to spawn target!" + str(e))


def main():
    rclpy.init()
    turtle_service = TurtleService()
    rclpy.spin(turtle_service)
    turtle_service.destroy_node()
    rclpy.shutdown()

# create client for spawing new turtles