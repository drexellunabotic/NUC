// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_phoenix:msg/MotorStatus.idl
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
#include "ros_phoenix/msg/detail/motor_status__struct.h"
#include "ros_phoenix/msg/detail/motor_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros_phoenix__msg__motor_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("ros_phoenix.msg._motor_status.MotorStatus", full_classname_dest, 41) == 0);
  }
  ros_phoenix__msg__MotorStatus * ros_message = _ros_message;
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bus_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bus_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_percent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_percent = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fwd_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "fwd_limit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fwd_limit = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rev_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "rev_limit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rev_limit = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_phoenix__msg__motor_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_phoenix.msg._motor_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_phoenix__msg__MotorStatus * ros_message = (ros_phoenix__msg__MotorStatus *)raw_ros_message;
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bus_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_percent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fwd_limit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fwd_limit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fwd_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rev_limit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rev_limit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rev_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
