// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
// generated code does not contain a copyright notice
#include "isaac_interfaces/msg/detail/perception_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "isaac_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "isaac_interfaces/msg/detail/perception_result__struct.h"
#include "isaac_interfaces/msg/detail/perception_result__functions.h"
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

#include "rosidl_runtime_c/string.h"  // object_id, object_type
#include "rosidl_runtime_c/string_functions.h"  // object_id, object_type

// forward declare type support functions


using _PerceptionResult__ros_msg_type = isaac_interfaces__msg__PerceptionResult;

static bool _PerceptionResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PerceptionResult__ros_msg_type * ros_message = static_cast<const _PerceptionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: mineral_detected
  {
    cdr << (ros_message->mineral_detected ? true : false);
  }

  // Field name: object_id
  {
    const rosidl_runtime_c__String * str = &ros_message->object_id;
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

  // Field name: object_type
  {
    const rosidl_runtime_c__String * str = &ros_message->object_type;
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

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: obstacle_detected
  {
    cdr << (ros_message->obstacle_detected ? true : false);
  }

  // Field name: obstacle_distance
  {
    cdr << ros_message->obstacle_distance;
  }

  // Field name: terrain_traversable
  {
    cdr << (ros_message->terrain_traversable ? true : false);
  }

  // Field name: terrain_slope
  {
    cdr << ros_message->terrain_slope;
  }

  return true;
}

static bool _PerceptionResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PerceptionResult__ros_msg_type * ros_message = static_cast<_PerceptionResult__ros_msg_type *>(untyped_ros_message);
  // Field name: mineral_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mineral_detected = tmp ? true : false;
  }

  // Field name: object_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_id.data) {
      rosidl_runtime_c__String__init(&ros_message->object_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_id'\n");
      return false;
    }
  }

  // Field name: object_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_type.data) {
      rosidl_runtime_c__String__init(&ros_message->object_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_type'\n");
      return false;
    }
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: obstacle_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->obstacle_detected = tmp ? true : false;
  }

  // Field name: obstacle_distance
  {
    cdr >> ros_message->obstacle_distance;
  }

  // Field name: terrain_traversable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->terrain_traversable = tmp ? true : false;
  }

  // Field name: terrain_slope
  {
    cdr >> ros_message->terrain_slope;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isaac_interfaces
size_t get_serialized_size_isaac_interfaces__msg__PerceptionResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerceptionResult__ros_msg_type * ros_message = static_cast<const _PerceptionResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mineral_detected
  {
    size_t item_size = sizeof(ros_message->mineral_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_id.size + 1);
  // field.name object_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_type.size + 1);
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_detected
  {
    size_t item_size = sizeof(ros_message->obstacle_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacle_distance
  {
    size_t item_size = sizeof(ros_message->obstacle_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name terrain_traversable
  {
    size_t item_size = sizeof(ros_message->terrain_traversable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name terrain_slope
  {
    size_t item_size = sizeof(ros_message->terrain_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PerceptionResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_isaac_interfaces__msg__PerceptionResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_isaac_interfaces
size_t max_serialized_size_isaac_interfaces__msg__PerceptionResult(
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

  // member: mineral_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_id
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
  // member: object_type
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
  // member: confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: obstacle_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: obstacle_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: terrain_traversable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: terrain_slope
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = isaac_interfaces__msg__PerceptionResult;
    is_plain =
      (
      offsetof(DataType, terrain_slope) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PerceptionResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_isaac_interfaces__msg__PerceptionResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PerceptionResult = {
  "isaac_interfaces::msg",
  "PerceptionResult",
  _PerceptionResult__cdr_serialize,
  _PerceptionResult__cdr_deserialize,
  _PerceptionResult__get_serialized_size,
  _PerceptionResult__max_serialized_size
};

static rosidl_message_type_support_t _PerceptionResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PerceptionResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, msg, PerceptionResult)() {
  return &_PerceptionResult__type_support;
}

#if defined(__cplusplus)
}
#endif
