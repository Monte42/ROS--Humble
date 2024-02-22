#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


class MyNode(Node):
    def __init__(self):
        super().__init__("py_test")
        self.get_logger().info("Hello World!")
        self.get_logger().info("Hello World?")
        self.counter_ = 2
        self.create_timer(1.0, self.timer_cb)
    
    def timer_cb(self):
        self.get_logger().info(f'I said hello {self.counter_} times already')
        self.counter_ += 1


def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()