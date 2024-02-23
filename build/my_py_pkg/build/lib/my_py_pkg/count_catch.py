#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt64
from example_interfaces.srv import SetBool

class CountCatcher(Node):
    def __init__(self):
        super().__init__('count_catch')
        self.count_ = 0
        
        self.subscriber_ = self.create_subscription(
            UInt64 ,'number', self.cb_display_count, 10)        
        self.publisher_ = self.create_publisher(
            UInt64, 'curr_count', 10)
        self.reset_counter_ = self.create_service(
            SetBool, 'resest_counter', self.cb_reset_counter)
        
        
        self.get_logger().info("count catcher running...")

    def cb_display_count(self, msg):
        self.count_ += msg.data
        new_msg = UInt64()
        new_msg.data = self.count_
        self.publisher_.publish(new_msg)
    def cb_reset_counter(self, request, response):
        if request.data:
            self.count_ = 0
            response.success = True
            response.message = 'Count at 0'
        else:
            response.success = False
            response.message = 'Count reset failed'
        return response
            
def main(args=None):
    rclpy.init()
    node = CountCatcher()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()