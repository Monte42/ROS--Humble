// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/KillTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/kill_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillTurtle_Request_turtle_name
{
public:
  Init_KillTurtle_Request_turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::KillTurtle_Request turtle_name(::my_robot_interfaces::srv::KillTurtle_Request::_turtle_name_type arg)
  {
    msg_.turtle_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::KillTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::KillTurtle_Request>()
{
  return my_robot_interfaces::srv::builder::Init_KillTurtle_Request_turtle_name();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_KillTurtle_Response_sucess
{
public:
  Init_KillTurtle_Response_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::KillTurtle_Response sucess(::my_robot_interfaces::srv::KillTurtle_Response::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::KillTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::KillTurtle_Response>()
{
  return my_robot_interfaces::srv::builder::Init_KillTurtle_Response_sucess();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__KILL_TURTLE__BUILDER_HPP_
