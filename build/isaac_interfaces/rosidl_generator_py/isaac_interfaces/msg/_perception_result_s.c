// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from isaac_interfaces:msg/PerceptionResult.idl
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
#include "isaac_interfaces/msg/detail/perception_result__struct.h"
#include "isaac_interfaces/msg/detail/perception_result__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool isaac_interfaces__msg__perception_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("isaac_interfaces.msg._perception_result.PerceptionResult", full_classname_dest, 56) == 0);
  }
  isaac_interfaces__msg__PerceptionResult * ros_message = _ros_message;
  {  // mineral_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "mineral_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mineral_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // object_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->object_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // object_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->object_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obstacle_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->obstacle_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // obstacle_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // terrain_traversable
    PyObject * field = PyObject_GetAttrString(_pymsg, "terrain_traversable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->terrain_traversable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // terrain_slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "terrain_slope");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->terrain_slope = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * isaac_interfaces__msg__perception_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PerceptionResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("isaac_interfaces.msg._perception_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PerceptionResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  isaac_interfaces__msg__PerceptionResult * ros_message = (isaac_interfaces__msg__PerceptionResult *)raw_ros_message;
  {  // mineral_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mineral_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mineral_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->object_id.data,
      strlen(ros_message->object_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->object_type.data,
      strlen(ros_message->object_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->obstacle_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // terrain_traversable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->terrain_traversable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "terrain_traversable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // terrain_slope
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->terrain_slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "terrain_slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
