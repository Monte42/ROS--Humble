#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

class AddTwoIntsServerNode(Node): 
    def __init__(self):
        super().__init__('add_two_ints_server')
        self.server_ = self.create_service(
            AddTwoInts, 'add_two_ints', self.cb_add_two_ints)
        self.get_logger().info('add int server running..')

    def cb_add_two_ints(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f"{request.a} + {request.b} = {response.sum}")
        return response
        



def main(args=None): # <- add to entrypoints in setup.py
    rclpy.init()
    node = AddTwoIntsServerNode() # Change name / Match name on line 5
    rclpy.spin(node)
    rclpy.shutdown()




if __name__ == '__main__':
    main()