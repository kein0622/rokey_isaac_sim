// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from isaac_interfaces:action/NavigateTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "isaac_interfaces/action/detail/navigate_task__struct.h"
#include "isaac_interfaces/action/detail/navigate_task__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_Goal_type_support_ids_t;

static const _NavigateTask_Goal_type_support_ids_t _NavigateTask_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_Goal_type_support_symbol_names_t _NavigateTask_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_Goal)),
  }
};

typedef struct _NavigateTask_Goal_type_support_data_t
{
  void * data[2];
} _NavigateTask_Goal_type_support_data_t;

static _NavigateTask_Goal_type_support_data_t _NavigateTask_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_Goal_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_Goal)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_Result_type_support_ids_t;

static const _NavigateTask_Result_type_support_ids_t _NavigateTask_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_Result_type_support_symbol_names_t _NavigateTask_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_Result)),
  }
};

typedef struct _NavigateTask_Result_type_support_data_t
{
  void * data[2];
} _NavigateTask_Result_type_support_data_t;

static _NavigateTask_Result_type_support_data_t _NavigateTask_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_Result_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_Result)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_Feedback_type_support_ids_t;

static const _NavigateTask_Feedback_type_support_ids_t _NavigateTask_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_Feedback_type_support_symbol_names_t _NavigateTask_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_Feedback)),
  }
};

typedef struct _NavigateTask_Feedback_type_support_data_t
{
  void * data[2];
} _NavigateTask_Feedback_type_support_data_t;

static _NavigateTask_Feedback_type_support_data_t _NavigateTask_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_Feedback_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_Feedback)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_SendGoal_Request_type_support_ids_t;

static const _NavigateTask_SendGoal_Request_type_support_ids_t _NavigateTask_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_SendGoal_Request_type_support_symbol_names_t _NavigateTask_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_SendGoal_Request)),
  }
};

typedef struct _NavigateTask_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NavigateTask_SendGoal_Request_type_support_data_t;

static _NavigateTask_SendGoal_Request_type_support_data_t _NavigateTask_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_SendGoal_Request_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_SendGoal_Request)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_SendGoal_Response_type_support_ids_t;

static const _NavigateTask_SendGoal_Response_type_support_ids_t _NavigateTask_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_SendGoal_Response_type_support_symbol_names_t _NavigateTask_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_SendGoal_Response)),
  }
};

typedef struct _NavigateTask_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NavigateTask_SendGoal_Response_type_support_data_t;

static _NavigateTask_SendGoal_Response_type_support_data_t _NavigateTask_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_SendGoal_Response_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_SendGoal_Response)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_SendGoal_type_support_ids_t;

static const _NavigateTask_SendGoal_type_support_ids_t _NavigateTask_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_SendGoal_type_support_symbol_names_t _NavigateTask_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_SendGoal)),
  }
};

typedef struct _NavigateTask_SendGoal_type_support_data_t
{
  void * data[2];
} _NavigateTask_SendGoal_type_support_data_t;

static _NavigateTask_SendGoal_type_support_data_t _NavigateTask_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_SendGoal_service_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateTask_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_SendGoal)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_GetResult_Request_type_support_ids_t;

static const _NavigateTask_GetResult_Request_type_support_ids_t _NavigateTask_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_GetResult_Request_type_support_symbol_names_t _NavigateTask_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_GetResult_Request)),
  }
};

typedef struct _NavigateTask_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NavigateTask_GetResult_Request_type_support_data_t;

static _NavigateTask_GetResult_Request_type_support_data_t _NavigateTask_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_GetResult_Request_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_GetResult_Request)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_GetResult_Response_type_support_ids_t;

static const _NavigateTask_GetResult_Response_type_support_ids_t _NavigateTask_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_GetResult_Response_type_support_symbol_names_t _NavigateTask_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_GetResult_Response)),
  }
};

typedef struct _NavigateTask_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NavigateTask_GetResult_Response_type_support_data_t;

static _NavigateTask_GetResult_Response_type_support_data_t _NavigateTask_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_GetResult_Response_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_GetResult_Response)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_GetResult_type_support_ids_t;

static const _NavigateTask_GetResult_type_support_ids_t _NavigateTask_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_GetResult_type_support_symbol_names_t _NavigateTask_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_GetResult)),
  }
};

typedef struct _NavigateTask_GetResult_type_support_data_t
{
  void * data[2];
} _NavigateTask_GetResult_type_support_data_t;

static _NavigateTask_GetResult_type_support_data_t _NavigateTask_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_GetResult_service_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateTask_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_GetResult)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__struct.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace isaac_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateTask_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateTask_FeedbackMessage_type_support_ids_t;

static const _NavigateTask_FeedbackMessage_type_support_ids_t _NavigateTask_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateTask_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateTask_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateTask_FeedbackMessage_type_support_symbol_names_t _NavigateTask_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, isaac_interfaces, action, NavigateTask_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_interfaces, action, NavigateTask_FeedbackMessage)),
  }
};

typedef struct _NavigateTask_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NavigateTask_FeedbackMessage_type_support_data_t;

static _NavigateTask_FeedbackMessage_type_support_data_t _NavigateTask_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateTask_FeedbackMessage_message_typesupport_map = {
  2,
  "isaac_interfaces",
  &_NavigateTask_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateTask_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateTask_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateTask_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateTask_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace isaac_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_FeedbackMessage)() {
  return &::isaac_interfaces::action::rosidl_typesupport_c::NavigateTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "isaac_interfaces/action/navigate_task.h"
// already included above
// #include "isaac_interfaces/action/detail/navigate_task__type_support.h"

static rosidl_action_type_support_t _isaac_interfaces__action__NavigateTask__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, isaac_interfaces, action, NavigateTask)()
{
  // Thread-safe by always writing the same values to the static struct
  _isaac_interfaces__action__NavigateTask__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_SendGoal)();
  _isaac_interfaces__action__NavigateTask__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_GetResult)();
  _isaac_interfaces__action__NavigateTask__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _isaac_interfaces__action__NavigateTask__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, isaac_interfaces, action, NavigateTask_FeedbackMessage)();
  _isaac_interfaces__action__NavigateTask__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_isaac_interfaces__action__NavigateTask__typesupport_c;
}

#ifdef __cplusplus
}
#endif
