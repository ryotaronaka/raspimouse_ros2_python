// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raspimouse_msgs:srv/TimedMotionService.idl
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
#include "raspimouse_msgs/srv/detail/timed_motion_service__struct.h"
#include "raspimouse_msgs/srv/detail/timed_motion_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool raspimouse_msgs__srv__timed_motion_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("raspimouse_msgs.srv._timed_motion_service.TimedMotionService_Request", full_classname_dest, 68) == 0);
  }
  raspimouse_msgs__srv__TimedMotionService_Request * ros_message = _ros_message;
  {  // left_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_hz = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_hz = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // duration_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_ms");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration_ms = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raspimouse_msgs__srv__timed_motion_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TimedMotionService_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raspimouse_msgs.srv._timed_motion_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimedMotionService_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raspimouse_msgs__srv__TimedMotionService_Request * ros_message = (raspimouse_msgs__srv__TimedMotionService_Request *)raw_ros_message;
  {  // left_hz
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_hz
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_ms
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->duration_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion_service__struct.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool raspimouse_msgs__srv__timed_motion_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("raspimouse_msgs.srv._timed_motion_service.TimedMotionService_Response", full_classname_dest, 69) == 0);
  }
  raspimouse_msgs__srv__TimedMotionService_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raspimouse_msgs__srv__timed_motion_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TimedMotionService_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raspimouse_msgs.srv._timed_motion_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimedMotionService_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raspimouse_msgs__srv__TimedMotionService_Response * ros_message = (raspimouse_msgs__srv__TimedMotionService_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
