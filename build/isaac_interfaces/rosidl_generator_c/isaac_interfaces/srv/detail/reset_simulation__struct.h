// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:srv/ResetSimulation.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_H_
#define ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetSimulation in the package isaac_interfaces.
typedef struct isaac_interfaces__srv__ResetSimulation_Request
{
  bool reset_world;
  bool reset_robot;
  bool reset_mission;
  rosidl_runtime_c__String reason;
} isaac_interfaces__srv__ResetSimulation_Request;

// Struct for a sequence of isaac_interfaces__srv__ResetSimulation_Request.
typedef struct isaac_interfaces__srv__ResetSimulation_Request__Sequence
{
  isaac_interfaces__srv__ResetSimulation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__srv__ResetSimulation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetSimulation in the package isaac_interfaces.
typedef struct isaac_interfaces__srv__ResetSimulation_Response
{
  bool success;
  rosidl_runtime_c__String message;
} isaac_interfaces__srv__ResetSimulation_Response;

// Struct for a sequence of isaac_interfaces__srv__ResetSimulation_Response.
typedef struct isaac_interfaces__srv__ResetSimulation_Response__Sequence
{
  isaac_interfaces__srv__ResetSimulation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__srv__ResetSimulation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__SRV__DETAIL__RESET_SIMULATION__STRUCT_H_
