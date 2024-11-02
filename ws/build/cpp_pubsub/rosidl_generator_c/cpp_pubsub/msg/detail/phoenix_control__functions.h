// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_pubsub:msg/PhoenixControl.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__FUNCTIONS_H_
#define CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_pubsub/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_pubsub/msg/detail/phoenix_control__struct.h"

/// Initialize msg/PhoenixControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_pubsub__msg__PhoenixControl
 * )) before or use
 * cpp_pubsub__msg__PhoenixControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__msg__PhoenixControl__init(cpp_pubsub__msg__PhoenixControl * msg);

/// Finalize msg/PhoenixControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__msg__PhoenixControl__fini(cpp_pubsub__msg__PhoenixControl * msg);

/// Create msg/PhoenixControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_pubsub__msg__PhoenixControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
cpp_pubsub__msg__PhoenixControl *
cpp_pubsub__msg__PhoenixControl__create();

/// Destroy msg/PhoenixControl message.
/**
 * It calls
 * cpp_pubsub__msg__PhoenixControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__msg__PhoenixControl__destroy(cpp_pubsub__msg__PhoenixControl * msg);

/// Check for msg/PhoenixControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__msg__PhoenixControl__are_equal(const cpp_pubsub__msg__PhoenixControl * lhs, const cpp_pubsub__msg__PhoenixControl * rhs);

/// Copy a msg/PhoenixControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__msg__PhoenixControl__copy(
  const cpp_pubsub__msg__PhoenixControl * input,
  cpp_pubsub__msg__PhoenixControl * output);

/// Initialize array of msg/PhoenixControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_pubsub__msg__PhoenixControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__msg__PhoenixControl__Sequence__init(cpp_pubsub__msg__PhoenixControl__Sequence * array, size_t size);

/// Finalize array of msg/PhoenixControl messages.
/**
 * It calls
 * cpp_pubsub__msg__PhoenixControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__msg__PhoenixControl__Sequence__fini(cpp_pubsub__msg__PhoenixControl__Sequence * array);

/// Create array of msg/PhoenixControl messages.
/**
 * It allocates the memory for the array and calls
 * cpp_pubsub__msg__PhoenixControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
cpp_pubsub__msg__PhoenixControl__Sequence *
cpp_pubsub__msg__PhoenixControl__Sequence__create(size_t size);

/// Destroy array of msg/PhoenixControl messages.
/**
 * It calls
 * cpp_pubsub__msg__PhoenixControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
void
cpp_pubsub__msg__PhoenixControl__Sequence__destroy(cpp_pubsub__msg__PhoenixControl__Sequence * array);

/// Check for msg/PhoenixControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__msg__PhoenixControl__Sequence__are_equal(const cpp_pubsub__msg__PhoenixControl__Sequence * lhs, const cpp_pubsub__msg__PhoenixControl__Sequence * rhs);

/// Copy an array of msg/PhoenixControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_pubsub
bool
cpp_pubsub__msg__PhoenixControl__Sequence__copy(
  const cpp_pubsub__msg__PhoenixControl__Sequence * input,
  cpp_pubsub__msg__PhoenixControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_PUBSUB__MSG__DETAIL__PHOENIX_CONTROL__FUNCTIONS_H_
