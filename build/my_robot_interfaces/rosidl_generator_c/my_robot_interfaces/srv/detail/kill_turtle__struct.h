// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:srv/KillTurtle.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__KILL_TURTLE__STRUCT_H_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__KILL_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtle_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KillTurtle in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__KillTurtle_Request
{
  rosidl_runtime_c__String turtle_name;
} my_robot_interfaces__srv__KillTurtle_Request;

// Struct for a sequence of my_robot_interfaces__srv__KillTurtle_Request.
typedef struct my_robot_interfaces__srv__KillTurtle_Request__Sequence
{
  my_robot_interfaces__srv__KillTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__KillTurtle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sucess'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/KillTurtle in the package my_robot_interfaces.
typedef struct my_robot_interfaces__srv__KillTurtle_Response
{
  rosidl_runtime_c__String sucess;
} my_robot_interfaces__srv__KillTurtle_Response;

// Struct for a sequence of my_robot_interfaces__srv__KillTurtle_Response.
typedef struct my_robot_interfaces__srv__KillTurtle_Response__Sequence
{
  my_robot_interfaces__srv__KillTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__srv__KillTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__KILL_TURTLE__STRUCT_H_
