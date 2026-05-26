// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__FUNCTIONS_H_
#define ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "isaac_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "isaac_interfaces/msg/detail/perception_result__struct.h"

/// Initialize msg/PerceptionResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * isaac_interfaces__msg__PerceptionResult
 * )) before or use
 * isaac_interfaces__msg__PerceptionResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__PerceptionResult__init(isaac_interfaces__msg__PerceptionResult * msg);

/// Finalize msg/PerceptionResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__PerceptionResult__fini(isaac_interfaces__msg__PerceptionResult * msg);

/// Create msg/PerceptionResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * isaac_interfaces__msg__PerceptionResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
isaac_interfaces__msg__PerceptionResult *
isaac_interfaces__msg__PerceptionResult__create();

/// Destroy msg/PerceptionResult message.
/**
 * It calls
 * isaac_interfaces__msg__PerceptionResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__PerceptionResult__destroy(isaac_interfaces__msg__PerceptionResult * msg);

/// Check for msg/PerceptionResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__PerceptionResult__are_equal(const isaac_interfaces__msg__PerceptionResult * lhs, const isaac_interfaces__msg__PerceptionResult * rhs);

/// Copy a msg/PerceptionResult message.
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
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__PerceptionResult__copy(
  const isaac_interfaces__msg__PerceptionResult * input,
  isaac_interfaces__msg__PerceptionResult * output);

/// Initialize array of msg/PerceptionResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * isaac_interfaces__msg__PerceptionResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__PerceptionResult__Sequence__init(isaac_interfaces__msg__PerceptionResult__Sequence * array, size_t size);

/// Finalize array of msg/PerceptionResult messages.
/**
 * It calls
 * isaac_interfaces__msg__PerceptionResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__PerceptionResult__Sequence__fini(isaac_interfaces__msg__PerceptionResult__Sequence * array);

/// Create array of msg/PerceptionResult messages.
/**
 * It allocates the memory for the array and calls
 * isaac_interfaces__msg__PerceptionResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
isaac_interfaces__msg__PerceptionResult__Sequence *
isaac_interfaces__msg__PerceptionResult__Sequence__create(size_t size);

/// Destroy array of msg/PerceptionResult messages.
/**
 * It calls
 * isaac_interfaces__msg__PerceptionResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__PerceptionResult__Sequence__destroy(isaac_interfaces__msg__PerceptionResult__Sequence * array);

/// Check for msg/PerceptionResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__PerceptionResult__Sequence__are_equal(const isaac_interfaces__msg__PerceptionResult__Sequence * lhs, const isaac_interfaces__msg__PerceptionResult__Sequence * rhs);

/// Copy an array of msg/PerceptionResult messages.
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
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__PerceptionResult__Sequence__copy(
  const isaac_interfaces__msg__PerceptionResult__Sequence * input,
  isaac_interfaces__msg__PerceptionResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__FUNCTIONS_H_
