// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_phoenix:msg/MotorControl.idl
// generated code does not contain a copyright notice
#include "ros_phoenix/msg/detail/motor_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_phoenix__msg__MotorControl__init(ros_phoenix__msg__MotorControl * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  msg->mode = 0l;
  // value
  msg->value = 0.0l;
  return true;
}

void
ros_phoenix__msg__MotorControl__fini(ros_phoenix__msg__MotorControl * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // value
}

bool
ros_phoenix__msg__MotorControl__are_equal(const ros_phoenix__msg__MotorControl * lhs, const ros_phoenix__msg__MotorControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
ros_phoenix__msg__MotorControl__copy(
  const ros_phoenix__msg__MotorControl * input,
  ros_phoenix__msg__MotorControl * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // value
  output->value = input->value;
  return true;
}

ros_phoenix__msg__MotorControl *
ros_phoenix__msg__MotorControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_phoenix__msg__MotorControl * msg = (ros_phoenix__msg__MotorControl *)allocator.allocate(sizeof(ros_phoenix__msg__MotorControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_phoenix__msg__MotorControl));
  bool success = ros_phoenix__msg__MotorControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_phoenix__msg__MotorControl__destroy(ros_phoenix__msg__MotorControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_phoenix__msg__MotorControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_phoenix__msg__MotorControl__Sequence__init(ros_phoenix__msg__MotorControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_phoenix__msg__MotorControl * data = NULL;

  if (size) {
    data = (ros_phoenix__msg__MotorControl *)allocator.zero_allocate(size, sizeof(ros_phoenix__msg__MotorControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_phoenix__msg__MotorControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_phoenix__msg__MotorControl__fini(&data[i - 1]);
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
ros_phoenix__msg__MotorControl__Sequence__fini(ros_phoenix__msg__MotorControl__Sequence * array)
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
      ros_phoenix__msg__MotorControl__fini(&array->data[i]);
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

ros_phoenix__msg__MotorControl__Sequence *
ros_phoenix__msg__MotorControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_phoenix__msg__MotorControl__Sequence * array = (ros_phoenix__msg__MotorControl__Sequence *)allocator.allocate(sizeof(ros_phoenix__msg__MotorControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_phoenix__msg__MotorControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_phoenix__msg__MotorControl__Sequence__destroy(ros_phoenix__msg__MotorControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_phoenix__msg__MotorControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_phoenix__msg__MotorControl__Sequence__are_equal(const ros_phoenix__msg__MotorControl__Sequence * lhs, const ros_phoenix__msg__MotorControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_phoenix__msg__MotorControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_phoenix__msg__MotorControl__Sequence__copy(
  const ros_phoenix__msg__MotorControl__Sequence * input,
  ros_phoenix__msg__MotorControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_phoenix__msg__MotorControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_phoenix__msg__MotorControl * data =
      (ros_phoenix__msg__MotorControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_phoenix__msg__MotorControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_phoenix__msg__MotorControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_phoenix__msg__MotorControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
