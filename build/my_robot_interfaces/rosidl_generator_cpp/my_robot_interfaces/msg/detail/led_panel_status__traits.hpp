// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/LedPanelStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_PANEL_STATUS__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_PANEL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/led_panel_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedPanelStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: panel_state
  {
    if (msg.panel_state.size() == 0) {
      out << "panel_state: []";
    } else {
      out << "panel_state: [";
      size_t pending_items = msg.panel_state.size();
      for (auto item : msg.panel_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedPanelStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: panel_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.panel_state.size() == 0) {
      out << "panel_state: []\n";
    } else {
      out << "panel_state:\n";
      for (auto item : msg.panel_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedPanelStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::msg::LedPanelStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::LedPanelStatus & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::LedPanelStatus>()
{
  return "my_robot_interfaces::msg::LedPanelStatus";
}

template<>
inline const char * name<my_robot_interfaces::msg::LedPanelStatus>()
{
  return "my_robot_interfaces/msg/LedPanelStatus";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::LedPanelStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::LedPanelStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::msg::LedPanelStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_PANEL_STATUS__TRAITS_HPP_
