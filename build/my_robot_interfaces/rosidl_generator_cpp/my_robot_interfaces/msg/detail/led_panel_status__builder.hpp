// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/LedPanelStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_PANEL_STATUS__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_PANEL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/led_panel_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedPanelStatus_debug_message
{
public:
  explicit Init_LedPanelStatus_debug_message(::my_robot_interfaces::msg::LedPanelStatus & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::LedPanelStatus debug_message(::my_robot_interfaces::msg::LedPanelStatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedPanelStatus msg_;
};

class Init_LedPanelStatus_panel_state
{
public:
  Init_LedPanelStatus_panel_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedPanelStatus_debug_message panel_state(::my_robot_interfaces::msg::LedPanelStatus::_panel_state_type arg)
  {
    msg_.panel_state = std::move(arg);
    return Init_LedPanelStatus_debug_message(msg_);
  }

private:
  ::my_robot_interfaces::msg::LedPanelStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::LedPanelStatus>()
{
  return my_robot_interfaces::msg::builder::Init_LedPanelStatus_panel_state();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_PANEL_STATUS__BUILDER_HPP_
