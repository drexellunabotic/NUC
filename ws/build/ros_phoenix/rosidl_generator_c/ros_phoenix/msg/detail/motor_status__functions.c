// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_phoenix:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "ros_phoenix/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_phoenix__msg__MotorStatus__init(ros_phoenix__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // bus_voltage
  // output_percent
  // output_voltage
  // output_current
  // position
  // velocity
  // fwd_limit
  // rev_limit
  return true;
}

void
ros_phoenix__msg__MotorStatus__fini(ros_phoenix__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // bus_voltage
  // output_percent
  // output_voltage
  // output_current
  // position
  // velocity
  // fwd_limit
  // rev_limit
}

bool
ros_phoenix__msg__MotorStatus__are_equal(const ros_phoenix__msg__MotorStatus * lhs, const ros_phoenix__msg__MotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // bus_voltage
  if (lhs->bus_voltage != rhs->bus_voltage) {
    return false;
  }
  // output_percent
  if (lhs->output_percent != rhs->output_percent) {
    return false;
  }
  // output_voltage
  if (lhs->output_voltage != rhs->output_voltage) {
    return false;
  }
  // output_current
  if (lhs->output_current != rhs->output_current) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // fwd_limit
  if (lhs->fwd_limit != rhs->fwd_limit) {
    return false;
  }
  // rev_limit
  if (lhs->rev_limit != rhs->rev_limit) {
    return false;
  }
  return true;
}

bool
ros_phoenix__msg__MotorStatus__copy(
  const ros_phoenix__msg__MotorStatus * input,
  ros_phoenix__msg__MotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // bus_voltage
  output->bus_voltage = input->bus_voltage;
  // output_percent
  output->output_percent = input->output_percent;
  // output_voltage
  output->output_voltage = input->output_voltage;
  // output_current
  output->output_current = input->output_current;
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // fwd_limit
  output->fwd_limit = input->fwd_limit;
  // rev_limit
  output->rev_limit = input->rev_limit;
  return true;
}

ros_phoenix__msg__MotorStatus *
ros_phoenix__msg__MotorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_phoenix__msg__MotorStatus * msg = (ros_phoenix__msg__MotorStatus *)allocator.allocate(sizeof(ros_phoenix__msg__MotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_phoenix__msg__MotorStatus));
  bool success = ros_phoenix__msg__MotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_phoenix__msg__MotorStatus__destroy(ros_phoenix__msg__MotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_phoenix__msg__MotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_phoenix__msg__MotorStatus__Sequence__init(ros_phoenix__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_phoenix__msg__MotorStatus * data = NULL;

  if (size) {
    data = (ros_phoenix__msg__MotorStatus *)allocator.zero_allocate(size, sizeof(ros_phoenix__msg__MotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_phoenix__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_phoenix__msg__MotorStatus__fini(&data[i - 1]);
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
ros_phoenix__msg__MotorStatus__Sequence__fini(ros_phoenix__msg__MotorStatus__Sequence * array)
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
      ros_phoenix__msg__MotorStatus__fini(&array->data[i]);
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

ros_phoenix__msg__MotorStatus__Sequence *
ros_phoenix__msg__MotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_phoenix__msg__MotorStatus__Sequence * array = (ros_phoenix__msg__MotorStatus__Sequence *)allocator.allocate(sizeof(ros_phoenix__msg__MotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_phoenix__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_phoenix__msg__MotorStatus__Sequence__destroy(ros_phoenix__msg__MotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_phoenix__msg__MotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_phoenix__msg__MotorStatus__Sequence__are_equal(const ros_phoenix__msg__MotorStatus__Sequence * lhs, const ros_phoenix__msg__MotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_phoenix__msg__MotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_phoenix__msg__MotorStatus__Sequence__copy(
  const ros_phoenix__msg__MotorStatus__Sequence * input,
  ros_phoenix__msg__MotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_phoenix__msg__MotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_phoenix__msg__MotorStatus * data =
      (ros_phoenix__msg__MotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_phoenix__msg__MotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_phoenix__msg__MotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_phoenix__msg__MotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
