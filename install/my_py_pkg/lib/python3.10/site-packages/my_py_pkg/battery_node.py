#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import SetLED

class BatteryNode(Node):
    def __init__(self):
        super().__init__('battery_node')
        self.battery_state_ = 100
        self.is_charging_ = True
        self.node_timer_ = self.create_timer(1.0, self.monitor_battery_status)
        self.get_logger().info('Battery Node Up')

    def call_set_led(self, state):
        client = self.create_client(SetLED,'set_led')
        while not client.wait_for_service(1.0):
            self.get_logger().warn('Searching for LED Panel...')
        req = SetLED.Request()
        req.led_n = 2
        req.state = state
        future_obj = client.call_async(req)
        future_obj.add_done_callback(partial(self.cb_set_led, led_n=2, state=state))
    def cb_set_led(self, future, led_n, state):
        try:
            sec, nanosec = self.get_clock().now().seconds_nanoseconds() # another tool
            res = future.result()
            self.get_logger().info(f'At: S-{sec}/NS-{nanosec}\nled_n:{led_n}, state"{state}, response:{res}')
        except Exception as e:
            self.get_logger().error('Service Failed')


    def monitor_battery_status(self):
        if self.battery_state_ < 100 and self.is_charging_:
            self.recharge_battery()
            self.call_set_led('off')
        elif self.battery_state_ > 0:
            self.discharge_battery()
            self.call_set_led('on')
        self.get_logger().info(f'Charging: {self.is_charging_}, Level: {self.battery_state_}%')
    def discharge_battery(self):
        self.battery_state_ -= 10
        if self.battery_state_ <= 0: self.is_charging_ = True
    def recharge_battery(self):
        self.battery_state_ += 20
        if self.battery_state_ >= 100: self.is_charging_ = False



def main(args=None):
    rclpy.init(args=args)
    node = BatteryNode()
    rclpy.spin(node)
    rclpy.shutdown()




if __name__ == '__main__':
    main()