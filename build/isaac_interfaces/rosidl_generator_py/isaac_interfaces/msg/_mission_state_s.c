// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from isaac_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "isaac_interfaces/msg/detail/mission_state__struct.h"
#include "isaac_interfaces/msg/detail/mission_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool isaac_interfaces__msg__mission_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("isaac_interfaces.msg._mission_state.MissionState", full_classname_dest, 48) == 0);
  }
  isaac_interfaces__msg__MissionState * ros_message = _ros_message;
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // previous_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "previous_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->previous_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // battery_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_percent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // low_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_battery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_battery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // critical_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "critical_battery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->critical_battery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cargo_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cargo_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cargo_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cargo_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "cargo_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cargo_capacity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // collected_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "collected_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collected_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // collection_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "collection_goal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collection_goal = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // active_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_task");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->active_task, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // last_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_error");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->last_error, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * isaac_interfaces__msg__mission_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("isaac_interfaces.msg._mission_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  isaac_interfaces__msg__MissionState * ros_message = (isaac_interfaces__msg__MissionState *)raw_ros_message;
  {  // state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state.data,
      strlen(ros_message->state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // previous_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->previous_state.data,
      strlen(ros_message->previous_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "previous_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_battery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_battery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // critical_battery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->critical_battery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "critical_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cargo_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cargo_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cargo_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cargo_capacity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cargo_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cargo_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collected_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->collected_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collected_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collection_goal
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->collection_goal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collection_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_task
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->active_task.data,
      strlen(ros_message->active_task.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_error
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->last_error.data,
      strlen(ros_message->last_error.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
