#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String # Add dependencies to package.xml

class RbootNewStation(Node):
    def __init__(self):
        super().__init__('robot_news_station')
        self.declare_parameter('robots_name', "Optimus")
        self.robot_name_ = self.get_parameter('robots_name').value
        # last arg is que size, store n msg in history incase a incoming msg is lost
        self.publisher_ = self.create_publisher(String, 'robot_news', 10)
        self.timer = self.create_timer(1.5, self.publish_news)
        self.get_logger().info("Robot News Running...")

    def publish_news(self):
        msg = String()
        msg.data = f"My Name is {self.robot_name_} from Robot news, prefered station of the autobots."
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = RbootNewStation()
    rclpy.spin(node)
    rclpy.shutdown()
    



if __name__ == '__main__':
    main()