// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_H_
#define ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'previous_state'
// Member 'active_task'
// Member 'last_error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionState in the package isaac_interfaces.
typedef struct isaac_interfaces__msg__MissionState
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String previous_state;
  float battery_percent;
  bool low_battery;
  bool critical_battery;
  int32_t cargo_count;
  int32_t cargo_capacity;
  int32_t collected_count;
  int32_t collection_goal;
  rosidl_runtime_c__String active_task;
  rosidl_runtime_c__String last_error;
} isaac_interfaces__msg__MissionState;

// Struct for a sequence of isaac_interfaces__msg__MissionState.
typedef struct isaac_interfaces__msg__MissionState__Sequence
{
  isaac_interfaces__msg__MissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__msg__MissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_H_
