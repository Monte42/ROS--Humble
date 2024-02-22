#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from std_msgs.msg import UInt64

class MyCounter(Node):
    def __init__(self):
        super().__init__('my_counter')
        self.declare_parameter('num_to_pub', 1)
        self.declare_parameter('pub_freq', 1.0)
        
        self.num_ = self.get_parameter('num_to_pub').value
        self.freq_ = self.get_parameter('pub_freq').value
        self.publisher_ = self.create_publisher(UInt64, 'number', 10)
        self.create_timer(self.freq_, self.publish_count)
        self.get_logger().info("Robot News Running...")

    def publish_count(self):
        msg = UInt64()
        msg.data = self.num_
        self.publisher_.publish(msg)
        
def main(args=None): 
    rclpy.init()
    node = MyCounter() 
    rclpy.spin(node)
    rclpy.shutdown()




if __name__ == '__main__':
    main()