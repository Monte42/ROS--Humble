// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/NewTurtlePos.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_POS__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/new_turtle_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_NewTurtlePos_turtle_theta
{
public:
  explicit Init_NewTurtlePos_turtle_theta(::my_robot_interfaces::msg::NewTurtlePos & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::NewTurtlePos turtle_theta(::my_robot_interfaces::msg::NewTurtlePos::_turtle_theta_type arg)
  {
    msg_.turtle_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtlePos msg_;
};

class Init_NewTurtlePos_turtle_y
{
public:
  explicit Init_NewTurtlePos_turtle_y(::my_robot_interfaces::msg::NewTurtlePos & msg)
  : msg_(msg)
  {}
  Init_NewTurtlePos_turtle_theta turtle_y(::my_robot_interfaces::msg::NewTurtlePos::_turtle_y_type arg)
  {
    msg_.turtle_y = std::move(arg);
    return Init_NewTurtlePos_turtle_theta(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtlePos msg_;
};

class Init_NewTurtlePos_turtle_x
{
public:
  explicit Init_NewTurtlePos_turtle_x(::my_robot_interfaces::msg::NewTurtlePos & msg)
  : msg_(msg)
  {}
  Init_NewTurtlePos_turtle_y turtle_x(::my_robot_interfaces::msg::NewTurtlePos::_turtle_x_type arg)
  {
    msg_.turtle_x = std::move(arg);
    return Init_NewTurtlePos_turtle_y(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtlePos msg_;
};

class Init_NewTurtlePos_turtle_name
{
public:
  Init_NewTurtlePos_turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NewTurtlePos_turtle_x turtle_name(::my_robot_interfaces::msg::NewTurtlePos::_turtle_name_type arg)
  {
    msg_.turtle_name = std::move(arg);
    return Init_NewTurtlePos_turtle_x(msg_);
  }

private:
  ::my_robot_interfaces::msg::NewTurtlePos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::NewTurtlePos>()
{
  return my_robot_interfaces::msg::builder::Init_NewTurtlePos_turtle_name();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__NEW_TURTLE_POS__BUILDER_HPP_
