#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

def main(args=None): 
    rclpy.init()
    node = Node('add_two_ints_no_oop')
    
    client = node.create_client(AddTwoInts, 'add_two_ints')
    while not client.wait_for_service(1.0):
        node.get_logger().warn('waiting')
    
    request = AddTwoInts.Request()
    request.a = 5
    request.b = 8
    
    future_object = client.call_async(request)
    rclpy.spin_until_future_complete(node, future_object)
    
    try:
        response = future_object.result()
        node.get_logger().info(str(response.sum))
    except Exception as e:
        node.get_logger().error(f"Service called failed {e}")
    
    rclpy.shutdown()




if __name__ == '__main__':
    main()