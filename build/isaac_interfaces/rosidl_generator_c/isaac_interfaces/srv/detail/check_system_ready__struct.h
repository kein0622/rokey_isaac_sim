// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:srv/CheckSystemReady.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__STRUCT_H_
#define ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'requester'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckSystemReady in the package isaac_interfaces.
typedef struct isaac_interfaces__srv__CheckSystemReady_Request
{
  rosidl_runtime_c__String requester;
} isaac_interfaces__srv__CheckSystemReady_Request;

// Struct for a sequence of isaac_interfaces__srv__CheckSystemReady_Request.
typedef struct isaac_interfaces__srv__CheckSystemReady_Request__Sequence
{
  isaac_interfaces__srv__CheckSystemReady_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__srv__CheckSystemReady_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'missing_nodes'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckSystemReady in the package isaac_interfaces.
typedef struct isaac_interfaces__srv__CheckSystemReady_Response
{
  bool ready;
  rosidl_runtime_c__String__Sequence missing_nodes;
  rosidl_runtime_c__String message;
} isaac_interfaces__srv__CheckSystemReady_Response;

// Struct for a sequence of isaac_interfaces__srv__CheckSystemReady_Response.
typedef struct isaac_interfaces__srv__CheckSystemReady_Response__Sequence
{
  isaac_interfaces__srv__CheckSystemReady_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__srv__CheckSystemReady_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__SRV__DETAIL__CHECK_SYSTEM_READY__STRUCT_H_
