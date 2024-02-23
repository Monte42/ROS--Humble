// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_robot_interfaces:msg/NewTurtlePos.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/new_turtle_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `turtle_name`
#include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__msg__NewTurtlePos__init(my_robot_interfaces__msg__NewTurtlePos * msg)
{
  if (!msg) {
    return false;
  }
  // turtle_name
  if (!rosidl_runtime_c__String__init(&msg->turtle_name)) {
    my_robot_interfaces__msg__NewTurtlePos__fini(msg);
    return false;
  }
  // turtle_x
  // turtle_y
  // turtle_theta
  return true;
}

void
my_robot_interfaces__msg__NewTurtlePos__fini(my_robot_interfaces__msg__NewTurtlePos * msg)
{
  if (!msg) {
    return;
  }
  // turtle_name
  rosidl_runtime_c__String__fini(&msg->turtle_name);
  // turtle_x
  // turtle_y
  // turtle_theta
}

bool
my_robot_interfaces__msg__NewTurtlePos__are_equal(const my_robot_interfaces__msg__NewTurtlePos * lhs, const my_robot_interfaces__msg__NewTurtlePos * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turtle_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->turtle_name), &(rhs->turtle_name)))
  {
    return false;
  }
  // turtle_x
  if (lhs->turtle_x != rhs->turtle_x) {
    return false;
  }
  // turtle_y
  if (lhs->turtle_y != rhs->turtle_y) {
    return false;
  }
  // turtle_theta
  if (lhs->turtle_theta != rhs->turtle_theta) {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__msg__NewTurtlePos__copy(
  const my_robot_interfaces__msg__NewTurtlePos * input,
  my_robot_interfaces__msg__NewTurtlePos * output)
{
  if (!input || !output) {
    return false;
  }
  // turtle_name
  if (!rosidl_runtime_c__String__copy(
      &(input->turtle_name), &(output->turtle_name)))
  {
    return false;
  }
  // turtle_x
  output->turtle_x = input->turtle_x;
  // turtle_y
  output->turtle_y = input->turtle_y;
  // turtle_theta
  output->turtle_theta = input->turtle_theta;
  return true;
}

my_robot_interfaces__msg__NewTurtlePos *
my_robot_interfaces__msg__NewTurtlePos__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__NewTurtlePos * msg = (my_robot_interfaces__msg__NewTurtlePos *)allocator.allocate(sizeof(my_robot_interfaces__msg__NewTurtlePos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__msg__NewTurtlePos));
  bool success = my_robot_interfaces__msg__NewTurtlePos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__msg__NewTurtlePos__destroy(my_robot_interfaces__msg__NewTurtlePos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__msg__NewTurtlePos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__msg__NewTurtlePos__Sequence__init(my_robot_interfaces__msg__NewTurtlePos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__NewTurtlePos * data = NULL;

  if (size) {
    data = (my_robot_interfaces__msg__NewTurtlePos *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__msg__NewTurtlePos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__msg__NewTurtlePos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__msg__NewTurtlePos__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_robot_interfaces__msg__NewTurtlePos__Sequence__fini(my_robot_interfaces__msg__NewTurtlePos__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_robot_interfaces__msg__NewTurtlePos__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_robot_interfaces__msg__NewTurtlePos__Sequence *
my_robot_interfaces__msg__NewTurtlePos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__NewTurtlePos__Sequence * array = (my_robot_interfaces__msg__NewTurtlePos__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__msg__NewTurtlePos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__msg__NewTurtlePos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__msg__NewTurtlePos__Sequence__destroy(my_robot_interfaces__msg__NewTurtlePos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__msg__NewTurtlePos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__msg__NewTurtlePos__Sequence__are_equal(const my_robot_interfaces__msg__NewTurtlePos__Sequence * lhs, const my_robot_interfaces__msg__NewTurtlePos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__msg__NewTurtlePos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__msg__NewTurtlePos__Sequence__copy(
  const my_robot_interfaces__msg__NewTurtlePos__Sequence * input,
  my_robot_interfaces__msg__NewTurtlePos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__msg__NewTurtlePos);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__msg__NewTurtlePos * data =
      (my_robot_interfaces__msg__NewTurtlePos *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__msg__NewTurtlePos__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__msg__NewTurtlePos__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__msg__NewTurtlePos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
