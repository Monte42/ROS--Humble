#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNodeClass(Node): # Change name <- add to entrypoints in setup.py
    def __init__(self):
        super().__init__('node_name') # Change name



def main(args=None): # <- add to entrypoints in setup.py
    rclpy.init()
    
    node = MyNodeClass() # Change name / Match name on line 5
    
    rclpy.spin()
    rclpy.shutdown()




if __name__ == '__main__':
    main()