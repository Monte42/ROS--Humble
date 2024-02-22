// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_robot_interfaces:msg/LedPanelStatus.idl
// generated code does not contain a copyright notice
#include "my_robot_interfaces/msg/detail/led_panel_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `panel_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

bool
my_robot_interfaces__msg__LedPanelStatus__init(my_robot_interfaces__msg__LedPanelStatus * msg)
{
  if (!msg) {
    return false;
  }
  // panel_state
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->panel_state, 0)) {
    my_robot_interfaces__msg__LedPanelStatus__fini(msg);
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__init(&msg->debug_message)) {
    my_robot_interfaces__msg__LedPanelStatus__fini(msg);
    return false;
  }
  return true;
}

void
my_robot_interfaces__msg__LedPanelStatus__fini(my_robot_interfaces__msg__LedPanelStatus * msg)
{
  if (!msg) {
    return;
  }
  // panel_state
  rosidl_runtime_c__int64__Sequence__fini(&msg->panel_state);
  // debug_message
  rosidl_runtime_c__String__fini(&msg->debug_message);
}

bool
my_robot_interfaces__msg__LedPanelStatus__are_equal(const my_robot_interfaces__msg__LedPanelStatus * lhs, const my_robot_interfaces__msg__LedPanelStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // panel_state
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->panel_state), &(rhs->panel_state)))
  {
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->debug_message), &(rhs->debug_message)))
  {
    return false;
  }
  return true;
}

bool
my_robot_interfaces__msg__LedPanelStatus__copy(
  const my_robot_interfaces__msg__LedPanelStatus * input,
  my_robot_interfaces__msg__LedPanelStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // panel_state
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->panel_state), &(output->panel_state)))
  {
    return false;
  }
  // debug_message
  if (!rosidl_runtime_c__String__copy(
      &(input->debug_message), &(output->debug_message)))
  {
    return false;
  }
  return true;
}

my_robot_interfaces__msg__LedPanelStatus *
my_robot_interfaces__msg__LedPanelStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__LedPanelStatus * msg = (my_robot_interfaces__msg__LedPanelStatus *)allocator.allocate(sizeof(my_robot_interfaces__msg__LedPanelStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_robot_interfaces__msg__LedPanelStatus));
  bool success = my_robot_interfaces__msg__LedPanelStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_robot_interfaces__msg__LedPanelStatus__destroy(my_robot_interfaces__msg__LedPanelStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_robot_interfaces__msg__LedPanelStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_robot_interfaces__msg__LedPanelStatus__Sequence__init(my_robot_interfaces__msg__LedPanelStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__LedPanelStatus * data = NULL;

  if (size) {
    data = (my_robot_interfaces__msg__LedPanelStatus *)allocator.zero_allocate(size, sizeof(my_robot_interfaces__msg__LedPanelStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_robot_interfaces__msg__LedPanelStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_robot_interfaces__msg__LedPanelStatus__fini(&data[i - 1]);
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
my_robot_interfaces__msg__LedPanelStatus__Sequence__fini(my_robot_interfaces__msg__LedPanelStatus__Sequence * array)
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
      my_robot_interfaces__msg__LedPanelStatus__fini(&array->data[i]);
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

my_robot_interfaces__msg__LedPanelStatus__Sequence *
my_robot_interfaces__msg__LedPanelStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_robot_interfaces__msg__LedPanelStatus__Sequence * array = (my_robot_interfaces__msg__LedPanelStatus__Sequence *)allocator.allocate(sizeof(my_robot_interfaces__msg__LedPanelStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_robot_interfaces__msg__LedPanelStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_robot_interfaces__msg__LedPanelStatus__Sequence__destroy(my_robot_interfaces__msg__LedPanelStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_robot_interfaces__msg__LedPanelStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_robot_interfaces__msg__LedPanelStatus__Sequence__are_equal(const my_robot_interfaces__msg__LedPanelStatus__Sequence * lhs, const my_robot_interfaces__msg__LedPanelStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_robot_interfaces__msg__LedPanelStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_robot_interfaces__msg__LedPanelStatus__Sequence__copy(
  const my_robot_interfaces__msg__LedPanelStatus__Sequence * input,
  my_robot_interfaces__msg__LedPanelStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_robot_interfaces__msg__LedPanelStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_robot_interfaces__msg__LedPanelStatus * data =
      (my_robot_interfaces__msg__LedPanelStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_robot_interfaces__msg__LedPanelStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_robot_interfaces__msg__LedPanelStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_robot_interfaces__msg__LedPanelStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
