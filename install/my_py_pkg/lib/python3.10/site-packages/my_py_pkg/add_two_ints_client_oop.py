#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from example_interfaces.srv import AddTwoInts

class AddTwoIntsClientNode(Node): 
    def __init__(self):
        super().__init__('add_two_ints_client')
        self.call_add_two_ints_server(6,7)
        self.call_add_two_ints_server(2,3)
        self.call_add_two_ints_server(9,9)

    def call_add_two_ints_server(self, a, b):
        client = self.create_client(AddTwoInts, 'add_two_ints')
        while not client.wait_for_service(1.0):
            self.get_logger().warn('waiting')
        
        request = AddTwoInts.Request()
        request.a = a
        request.b = b
        future_object = client.call_async(request)
        future_object.add_done_callback(partial(self.cb_add_two_ints, a=a, b=b))
    
    def cb_add_two_ints(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info(f"{a} + {b} = {response.sum}")
        except Exception as e:
            self.get_logger().error(f"Service called failed {e}")


def main(args=None): 
    rclpy.init(args=args)
    node = AddTwoIntsClientNode()   
    rclpy.spin(node)
    rclpy.shutdown()




if __name__ == '__main__':
    main()