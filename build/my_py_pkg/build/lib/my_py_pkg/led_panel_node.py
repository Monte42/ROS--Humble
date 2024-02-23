#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from my_robot_interfaces.srv import SetLED
from my_robot_interfaces.msg import LedPanelStatus

class LedPanelNode(Node):
    def __init__(self):
        super().__init__('led_panel')
        self.led_state_ = [0,0,0]
        self. server_ = self.create_service(
            SetLED, 'set_led', self.cb_update_led_panel_state)
        self.publisher_ = self.create_publisher(LedPanelStatus, 'led_panel_state', 10)
        # self.node_timer = self.create_timer(1.0, self.cb_publish_led_panel_state)
        
        self.get_logger().info('Led Panel Running...')
    
    def cb_update_led_panel_state(self, request, response):
        if request.led_n > (len(self.led_state_)-1):
            response.success = False
            self.get_logger().info(f"No such LED.. // Success: {response}")
            
        self.led_state_[request.led_n] = 1 if request.state == 'on' else 0
        response.success = True
        self.cb_publish_led_panel_state()
        self.get_logger().info(f"LED: {request.led_n} state:{request.state} // Success: {response}")
        return response

    def cb_publish_led_panel_state(self):
        msg = LedPanelStatus()
        msg.panel_state = self.led_state_
        msg.debug_message = 'Charging' if self.led_state_[2] == 1 else "Charged"
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()




if __name__ == '__main__':
    main()