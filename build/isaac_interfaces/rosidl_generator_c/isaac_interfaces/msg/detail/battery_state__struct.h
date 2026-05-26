// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BatteryState in the package isaac_interfaces.
typedef struct isaac_interfaces__msg__BatteryState
{
  float percentage;
  bool is_charging;
  bool is_low;
  bool is_critical;
  float voltage;
  float current;
  rosidl_runtime_c__String source;
} isaac_interfaces__msg__BatteryState;

// Struct for a sequence of isaac_interfaces__msg__BatteryState.
typedef struct isaac_interfaces__msg__BatteryState__Sequence
{
  isaac_interfaces__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
