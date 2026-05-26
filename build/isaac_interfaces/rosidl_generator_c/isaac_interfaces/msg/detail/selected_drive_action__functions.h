// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__FUNCTIONS_H_
#define ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "isaac_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "isaac_interfaces/msg/detail/selected_drive_action__struct.h"

/// Initialize msg/SelectedDriveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * isaac_interfaces__msg__SelectedDriveAction
 * )) before or use
 * isaac_interfaces__msg__SelectedDriveAction__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__SelectedDriveAction__init(isaac_interfaces__msg__SelectedDriveAction * msg);

/// Finalize msg/SelectedDriveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__SelectedDriveAction__fini(isaac_interfaces__msg__SelectedDriveAction * msg);

/// Create msg/SelectedDriveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * isaac_interfaces__msg__SelectedDriveAction__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
isaac_interfaces__msg__SelectedDriveAction *
isaac_interfaces__msg__SelectedDriveAction__create();

/// Destroy msg/SelectedDriveAction message.
/**
 * It calls
 * isaac_interfaces__msg__SelectedDriveAction__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__SelectedDriveAction__destroy(isaac_interfaces__msg__SelectedDriveAction * msg);

/// Check for msg/SelectedDriveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__SelectedDriveAction__are_equal(const isaac_interfaces__msg__SelectedDriveAction * lhs, const isaac_interfaces__msg__SelectedDriveAction * rhs);

/// Copy a msg/SelectedDriveAction message.
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
isaac_interfaces__msg__SelectedDriveAction__copy(
  const isaac_interfaces__msg__SelectedDriveAction * input,
  isaac_interfaces__msg__SelectedDriveAction * output);

/// Initialize array of msg/SelectedDriveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * isaac_interfaces__msg__SelectedDriveAction__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__SelectedDriveAction__Sequence__init(isaac_interfaces__msg__SelectedDriveAction__Sequence * array, size_t size);

/// Finalize array of msg/SelectedDriveAction messages.
/**
 * It calls
 * isaac_interfaces__msg__SelectedDriveAction__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__SelectedDriveAction__Sequence__fini(isaac_interfaces__msg__SelectedDriveAction__Sequence * array);

/// Create array of msg/SelectedDriveAction messages.
/**
 * It allocates the memory for the array and calls
 * isaac_interfaces__msg__SelectedDriveAction__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
isaac_interfaces__msg__SelectedDriveAction__Sequence *
isaac_interfaces__msg__SelectedDriveAction__Sequence__create(size_t size);

/// Destroy array of msg/SelectedDriveAction messages.
/**
 * It calls
 * isaac_interfaces__msg__SelectedDriveAction__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
void
isaac_interfaces__msg__SelectedDriveAction__Sequence__destroy(isaac_interfaces__msg__SelectedDriveAction__Sequence * array);

/// Check for msg/SelectedDriveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_interfaces
bool
isaac_interfaces__msg__SelectedDriveAction__Sequence__are_equal(const isaac_interfaces__msg__SelectedDriveAction__Sequence * lhs, const isaac_interfaces__msg__SelectedDriveAction__Sequence * rhs);

/// Copy an array of msg/SelectedDriveAction messages.
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
isaac_interfaces__msg__SelectedDriveAction__Sequence__copy(
  const isaac_interfaces__msg__SelectedDriveAction__Sequence * input,
  isaac_interfaces__msg__SelectedDriveAction__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__FUNCTIONS_H_
