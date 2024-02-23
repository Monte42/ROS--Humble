#!/usr/bin/env python3
import math
import random
import rclpy
from rclpy.node import Node

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from my_robot_interfaces.msg import NewTurtlePos

class TurtleControllerNode(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        self.x_target = 10.0
        self.y_target = 10.0
        self.turtles_ = []
                
        self.pose_ = None
        self.cmd_vel_publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.pose_subscriber_ = self.create_subscription(Pose, "turtle1/pose", self.cb_turtle_pose, 10)
        self.control_loop_timer_ = self.create_timer(0.01, self.control_loop)
        self.control_loop_timer_ = self.create_timer(2.0, self.fff)
        self.get_logger().info("Turtle Controller Running...")
        
    def cb_turtle_pose(self, msg):
        self.pose_ = msg

    def fff(self):
        self.x_target = random.uniform(2.0,9.0)
        self.y_target = random.uniform(2.0,9.0)


    def control_loop(self):
        if self.pose_ == None: return
        dist_x = self.x_target - self.pose_.x
        dist_y = self.y_target - self.pose_.y
        distance = math.sqrt(dist_x**2 + dist_y**2)
        msg = Twist()
        if distance > 0.5:
            msg.linear.x = 2*distance # <- this multiplyer is figured out from guess and test
            goal_theta = math.atan2(dist_y, dist_x)
            angle_diff = goal_theta - self.pose_.theta
            if angle_diff > math.pi:
                angle_diff -= 2*math.pi
            elif angle_diff < -math.pi:
                angle_diff += 2*math.pi
            msg.angular.z = 6*angle_diff
        else:
            msg.linear.x = 0.0
            # msg.linear.y = 0.0
            msg.angular.z = 0.0
        self.cmd_vel_publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleControllerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()