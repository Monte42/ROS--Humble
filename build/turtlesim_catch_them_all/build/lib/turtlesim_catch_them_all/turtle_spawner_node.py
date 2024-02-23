#!/usr/bin/env python3
import math
import random
import rclpy
from rclpy.node import Node
from functools import partial

from turtlesim.srv import Spawn
from my_robot_interfaces.msg import NewTurtlePos

class TurtleSpawnerNode(Node):
    def __init__(self):
        super().__init__('turtle_spawner')
        self.turtle_num_ = 2
        self.t_ = self.create_timer(1.0, self.spawn_turtle)
        self.new_turtle_publisher_ = self.create_publisher(NewTurtlePos, 'new_turtle_pos', 10)

    def spawn_turtle(self):
        turtle_name = f'turtle{self.turtle_num_}'
        x = random.uniform(2.0,9.0)
        y = random.uniform(2.0,9.0)
        theta = random.uniform(0.0, 2*math.pi)
        self.call_spawn_srv(turtle_name, x, y, theta)
        self.turtle_num_ += 1

    def call_spawn_srv(self, turtle_name, x, y, theta):
        client = self.create_client(Spawn, 'spawn')
        while not client.wait_for_service(1.0):
            self.get_logger().warn('Searching for turtlesim...')
        req = Spawn.Request()
        req.x = x
        req.y = y
        req.theta = theta
        req.name = turtle_name
        future_obj = client.call_async(req)
        future_obj.add_done_callback(partial(self.cb_call_spawn, turtle_name=turtle_name, x=x, y=y, theta=theta))
        
    def cb_call_spawn(self, future, turtle_name, x, y, theta):
        try:
            res = future.result()
            if res.name != '':
                self.get_logger().info(f'response: {res.name}')
                msg = NewTurtlePos()
                msg.turtle_name = turtle_name
                msg.turtle_x = x
                msg.turtle_y = y
                msg.turtle_theta = theta
                self.new_turtle_publisher_.publish(msg)
        except Exception as e:
            self.get_logger().error(f'Service Failed: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = TurtleSpawnerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()