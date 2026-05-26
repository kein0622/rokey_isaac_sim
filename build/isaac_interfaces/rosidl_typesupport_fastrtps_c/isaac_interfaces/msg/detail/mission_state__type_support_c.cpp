// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/msg/detail/mission_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "isaac_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "isaac_interfaces/msg/detail/mission_state__struct.h"
#include "isaac_interfaces/msg/detail/mission_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // active_task, last_error, previous_state, state
#include "rosidl_runtime_c/string_functions.h"  // active_task, last_error, previous_state, state

// forward declare type support functions


using _MissionState__ros_msg_type = isaac_interfaces__msg__MissionState;

static bool _MissionState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MissionState__ros_msg_type * ros_message = static_cast<const _MissionState__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: previous_state
  {
    const rosidl_runtime_c__String * str = &ros_message->previous_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: battery_percent
  {
    cdr << ros_message->battery_percent;
  }

  // Field name: low_battery
  {
    cdr << (ros_message->low_battery ? true : false);
  }

  // Field name: critical_battery
  {
    cdr << (ros_message->critical_battery ? true : false);
  }

  // Field name: cargo_count
  {
    cdr << ros_message->cargo_count;
  }

  // Field name: cargo_capacity
  {
    cdr << ros_message->cargo_capacity;
  }

  // Field name: collected_count
  {
    cdr << ros_message->collected_count;
  }

  // Field name: collection_goal
  {
    cdr << ros_message->collection_goal;
  }

  // Field name: active_task
  {
    const rosidl_runtime_c__String * str = &ros_message->active_task;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: last_error
  {
    const rosidl_runtime_c__String * str = &ros_message->last_error;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MissionState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MissionState__ros_msg_type * ros_message = static_cast<_MissionState__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: previous_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->previous_state.data) {
      rosidl_runtime_c__String__init(&ros_message->previous_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->previous_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'previous_state'\n");
      return false;
    }
  }

  // Field name: battery_percent
  {
    cdr >> ros_message->battery_percent;
  }

  // Field name: low_battery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_battery = tmp ? true : false;
  }

  // Field name: critical_battery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->critical_battery = tmp ? true : false;
  }

  // Field name: cargo_count
  {
    cdr >> ros_message->cargo_count;
  }

  // Field name: cargo_capacity
  {
    cdr >> ros_message->cargo_capacity;
  }

  // Field name: collected_count
  {
    cdr >> ros_message->collected_count;
  }

  // Field name: collection_goal
  {
    cdr >> ros_message->collection_goal;
  }

  // Field name: active_task
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->active_task.data) {
      rosidl_runtime_c__String__init(&ros_message->active_task);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->active_task,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'active_task'\n");
      return false;
    }
  }

  // Field name: last_error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_error.data) {
      rosidl_runtime_c__String__init(&ros_message->last_error);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_error'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isaac_interfaces
size_t get_serialized_size_isaac_interfaces__msg__MissionState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MissionState__ros_msg_type * ros_message = static_cast<const _MissionState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);
  // field.name previous_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->previous_state.size + 1);
  // field.name battery_percent
  {
    size_t item_size = sizeof(ros_message->battery_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_battery
  {
    size_t item_size = sizeof(ros_message->low_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name critical_battery
  {
    size_t item_size = sizeof(ros_message->critical_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cargo_count
  {
    size_t item_size = sizeof(ros_message->cargo_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cargo_capacity
  {
    size_t item_size = sizeof(ros_message->cargo_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collected_count
  {
    size_t item_size = sizeof(ros_message->collected_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collection_goal
  {
    size_t item_size = sizeof(ros_message->collection_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_task
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_task.size + 1);
  // field.name last_error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_error.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MissionState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_isaac_interfaces__msg__MissionState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isaac_interfaces
size_t max_serialized_size_isaac_interfaces__msg__MissionState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: previous_state
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: battery_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: low_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: critical_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cargo_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cargo_capacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: collected_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: collection_goal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: active_task
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: last_error
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = isaac_interfaces__msg__MissionState;
    is_plain =
      (
      offsetof(DataType, last_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MissionState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_isaac_interfaces__msg__MissionState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MissionState = {
  "isaac_interfaces::msg",
  "MissionState",
  _MissionState__cdr_serialize,
  _MissionState__cdr_deserialize,
  _MissionState__get_serialized_size,
  _MissionState__max_serialized_size
};

static rosidl_message_type_support_t _MissionState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MissionState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, msg, MissionState)() {
  return &_MissionState__type_support;
}

#if defined(__cplusplus)
}
#endif
