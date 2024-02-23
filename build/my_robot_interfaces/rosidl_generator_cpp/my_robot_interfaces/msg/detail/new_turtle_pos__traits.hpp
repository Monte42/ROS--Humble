// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/NewTurtlePos.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_POS__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/new_turtle_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NewTurtlePos & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_name
  {
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << ", ";
  }

  // member: turtle_x
  {
    out << "turtle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_x, out);
    out << ", ";
  }

  // member: turtle_y
  {
    out << "turtle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_y, out);
    out << ", ";
  }

  // member: turtle_theta
  {
    out << "turtle_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewTurtlePos & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_name: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_name, out);
    out << "\n";
  }

  // member: turtle_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_x: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_x, out);
    out << "\n";
  }

  // member: turtle_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_y: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_y, out);
    out << "\n";
  }

  // member: turtle_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turtle_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.turtle_theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewTurtlePos & msg, bool use_flow_style = false)
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
  const my_robot_interfaces::msg::NewTurtlePos & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::NewTurtlePos & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::NewTurtlePos>()
{
  return "my_robot_interfaces::msg::NewTurtlePos";
}

template<>
inline const char * name<my_robot_interfaces::msg::NewTurtlePos>()
{
  return "my_robot_interfaces/msg/NewTurtlePos";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::NewTurtlePos>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::NewTurtlePos>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::msg::NewTurtlePos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_POS__TRAITS_HPP_
