// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__STRUCT_H_
#define ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SelectedDriveAction in the package isaac_interfaces.
typedef struct isaac_interfaces__msg__SelectedDriveAction
{
  rosidl_runtime_c__String action;
  float target_x;
  float target_y;
  float target_yaw;
  float linear_velocity;
  float angular_velocity;
  float confidence;
  rosidl_runtime_c__String reason;
} isaac_interfaces__msg__SelectedDriveAction;

// Struct for a sequence of isaac_interfaces__msg__SelectedDriveAction.
typedef struct isaac_interfaces__msg__SelectedDriveAction__Sequence
{
  isaac_interfaces__msg__SelectedDriveAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__msg__SelectedDriveAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__MSG__DETAIL__SELECTED_DRIVE_ACTION__STRUCT_H_
