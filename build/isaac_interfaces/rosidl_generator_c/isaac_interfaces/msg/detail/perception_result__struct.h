// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_H_
#define ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_id'
// Member 'object_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PerceptionResult in the package isaac_interfaces.
typedef struct isaac_interfaces__msg__PerceptionResult
{
  bool mineral_detected;
  rosidl_runtime_c__String object_id;
  rosidl_runtime_c__String object_type;
  float confidence;
  float x;
  float y;
  float z;
  bool obstacle_detected;
  float obstacle_distance;
  bool terrain_traversable;
  float terrain_slope;
} isaac_interfaces__msg__PerceptionResult;

// Struct for a sequence of isaac_interfaces__msg__PerceptionResult.
typedef struct isaac_interfaces__msg__PerceptionResult__Sequence
{
  isaac_interfaces__msg__PerceptionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__msg__PerceptionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_H_
