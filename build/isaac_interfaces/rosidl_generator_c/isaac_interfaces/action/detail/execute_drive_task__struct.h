// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:action/ExecuteDriveTask.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__ACTION__DETAIL__EXECUTE_DRIVE_TASK__STRUCT_H_
#define ISAAC_INTERFACES__ACTION__DETAIL__EXECUTE_DRIVE_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'target_id'
// Member 'metadata'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_Goal
{
  rosidl_runtime_c__String command;
  float target_x;
  float target_y;
  float target_yaw;
  rosidl_runtime_c__String target_id;
  rosidl_runtime_c__String metadata;
} isaac_interfaces__action__ExecuteDriveTask_Goal;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_Goal.
typedef struct isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_Result
{
  bool success;
  rosidl_runtime_c__String message;
} isaac_interfaces__action__ExecuteDriveTask_Result;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_Result.
typedef struct isaac_interfaces__action__ExecuteDriveTask_Result__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_Feedback
{
  rosidl_runtime_c__String state;
  float progress;
  rosidl_runtime_c__String message;
} isaac_interfaces__action__ExecuteDriveTask_Feedback;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_Feedback.
typedef struct isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "isaac_interfaces/action/detail/execute_drive_task__struct.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  isaac_interfaces__action__ExecuteDriveTask_Goal goal;
} isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request.
typedef struct isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response.
typedef struct isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} isaac_interfaces__action__ExecuteDriveTask_GetResult_Request;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_GetResult_Request.
typedef struct isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "isaac_interfaces/action/detail/execute_drive_task__struct.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_GetResult_Response
{
  int8_t status;
  isaac_interfaces__action__ExecuteDriveTask_Result result;
} isaac_interfaces__action__ExecuteDriveTask_GetResult_Response;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_GetResult_Response.
typedef struct isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "isaac_interfaces/action/detail/execute_drive_task__struct.h"

/// Struct defined in action/ExecuteDriveTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  isaac_interfaces__action__ExecuteDriveTask_Feedback feedback;
} isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage;

// Struct for a sequence of isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage.
typedef struct isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence
{
  isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__ExecuteDriveTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__ACTION__DETAIL__EXECUTE_DRIVE_TASK__STRUCT_H_
