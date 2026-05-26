// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from isaac_interfaces:action/NavigateTask.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_INTERFACES__ACTION__DETAIL__NAVIGATE_TASK__STRUCT_H_
#define ISAAC_INTERFACES__ACTION__DETAIL__NAVIGATE_TASK__STRUCT_H_

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

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_Goal
{
  rosidl_runtime_c__String command;
  float target_x;
  float target_y;
  float target_yaw;
  rosidl_runtime_c__String target_id;
  rosidl_runtime_c__String metadata;
} isaac_interfaces__action__NavigateTask_Goal;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_Goal.
typedef struct isaac_interfaces__action__NavigateTask_Goal__Sequence
{
  isaac_interfaces__action__NavigateTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_Result
{
  bool success;
  rosidl_runtime_c__String message;
} isaac_interfaces__action__NavigateTask_Result;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_Result.
typedef struct isaac_interfaces__action__NavigateTask_Result__Sequence
{
  isaac_interfaces__action__NavigateTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_Feedback
{
  rosidl_runtime_c__String state;
  float progress;
  rosidl_runtime_c__String message;
} isaac_interfaces__action__NavigateTask_Feedback;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_Feedback.
typedef struct isaac_interfaces__action__NavigateTask_Feedback__Sequence
{
  isaac_interfaces__action__NavigateTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "isaac_interfaces/action/detail/navigate_task__struct.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  isaac_interfaces__action__NavigateTask_Goal goal;
} isaac_interfaces__action__NavigateTask_SendGoal_Request;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_SendGoal_Request.
typedef struct isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence
{
  isaac_interfaces__action__NavigateTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} isaac_interfaces__action__NavigateTask_SendGoal_Response;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_SendGoal_Response.
typedef struct isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence
{
  isaac_interfaces__action__NavigateTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} isaac_interfaces__action__NavigateTask_GetResult_Request;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_GetResult_Request.
typedef struct isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence
{
  isaac_interfaces__action__NavigateTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_GetResult_Response
{
  int8_t status;
  isaac_interfaces__action__NavigateTask_Result result;
} isaac_interfaces__action__NavigateTask_GetResult_Response;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_GetResult_Response.
typedef struct isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence
{
  isaac_interfaces__action__NavigateTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"

/// Struct defined in action/NavigateTask in the package isaac_interfaces.
typedef struct isaac_interfaces__action__NavigateTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  isaac_interfaces__action__NavigateTask_Feedback feedback;
} isaac_interfaces__action__NavigateTask_FeedbackMessage;

// Struct for a sequence of isaac_interfaces__action__NavigateTask_FeedbackMessage.
typedef struct isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence
{
  isaac_interfaces__action__NavigateTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} isaac_interfaces__action__NavigateTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_INTERFACES__ACTION__DETAIL__NAVIGATE_TASK__STRUCT_H_
