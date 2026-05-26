// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from isaac_interfaces:msg/SelectedDriveAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "isaac_interfaces/msg/detail/selected_drive_action__rosidl_typesupport_introspection_c.h"
#include "isaac_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "isaac_interfaces/msg/detail/selected_drive_action__functions.h"
#include "isaac_interfaces/msg/detail/selected_drive_action__struct.h"


// Include directives for member types
// Member `action`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  isaac_interfaces__msg__SelectedDriveAction__init(message_memory);
}

void isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_fini_function(void * message_memory)
{
  isaac_interfaces__msg__SelectedDriveAction__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_member_array[8] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, target_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, target_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, target_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, linear_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_interfaces__msg__SelectedDriveAction, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_members = {
  "isaac_interfaces__msg",  // message namespace
  "SelectedDriveAction",  // message name
  8,  // number of fields
  sizeof(isaac_interfaces__msg__SelectedDriveAction),
  isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_member_array,  // message members
  isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_init_function,  // function to initialize message memory (memory has to be allocated)
  isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_type_support_handle = {
  0,
  &isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isaac_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, msg, SelectedDriveAction)() {
  if (!isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_type_support_handle.typesupport_identifier) {
    isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &isaac_interfaces__msg__SelectedDriveAction__rosidl_typesupport_introspection_c__SelectedDriveAction_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
