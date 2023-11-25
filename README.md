# ROS2 Catch target with turtlesim (ROS2 Humble)

## Overview

ROS 2 Turtle Catcher is an interactive project that leverages the power of ROS 2 and the Humble package manager. Inspired by the turtlesim package from the ROS open-source community, this project adds a dynamic twist by introducing a game-like scenario.

### Main Features

- **Turtlesim Integration:** Utilizes the Turtlesim package from ROS 2 to provide a foundation for turtle-based simulations.

- **Random Target Generation:** Incorporates custom logic to dynamically generate random targets within the turtlesim environment.

- **Catch the Target:** Challenges the turtle to autonomously navigate the environment and capture the randomly generated target.

## Prerequisites

Before you begin, ensure that you have the following prerequisites installed on your system:

- Ubuntu 22.04
- Python 3 (>=3.8)
- curl
- git
- ROS2 Humble

## Getting Started

Experience the thrill of ROS 2 Turtle Catcher in just a few steps:

- 1. Clone the project repo:

     ```bash
     git clone https://github.com/krishna-1902/ROS2.git

- 2. Source ROS2 humble and ros2_ws
 
     ```bash
     source /opt/ros/humble/setup.bash
     source path_to/ros2_ws/ros2_ws/install/setup.bash

- 3. Start turtlesim node

     ```bash
     ros2 run turtlesim turtlesim_node

- 4. Start Contoller node

     ```bash
     ros2 run mini_project controller_node

- 5. Start Service Turtle node
 
     ```bash
     ros2 run mini_project turtle_service
