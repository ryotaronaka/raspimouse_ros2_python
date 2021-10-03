// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from raspimouse_msgs:srv/LightSensorsService.idl
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
#include "raspimouse_msgs/srv/detail/light_sensors_service__struct.h"
#include "raspimouse_msgs/srv/detail/light_sensors_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool raspimouse_msgs__srv__light_sensors_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("raspimouse_msgs.srv._light_sensors_service.LightSensorsService_Request", full_classname_dest, 70) == 0);
  }
  raspimouse_msgs__srv__LightSensorsService_Request * ros_message = _ros_message;
  {  // right_forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_forward");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_forward = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_side
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_side");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_side = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_side
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_side");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_side = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_forward
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_forward");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_forward = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raspimouse_msgs__srv__light_sensors_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LightSensorsService_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raspimouse_msgs.srv._light_sensors_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LightSensorsService_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raspimouse_msgs__srv__LightSensorsService_Request * ros_message = (raspimouse_msgs__srv__LightSensorsService_Request *)raw_ros_message;
  {  // right_forward
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_forward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_forward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_side
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_side);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_side", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_side
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_side);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_side", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_forward
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_forward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_forward", field);
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
// #include "raspimouse_msgs/srv/detail/light_sensors_service__struct.h"
// already included above
// #include "raspimouse_msgs/srv/detail/light_sensors_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool raspimouse_msgs__srv__light_sensors_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("raspimouse_msgs.srv._light_sensors_service.LightSensorsService_Response", full_classname_dest, 71) == 0);
  }
  raspimouse_msgs__srv__LightSensorsService_Response * ros_message = _ros_message;
  {  // sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sum = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * raspimouse_msgs__srv__light_sensors_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LightSensorsService_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("raspimouse_msgs.srv._light_sensors_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LightSensorsService_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  raspimouse_msgs__srv__LightSensorsService_Response * ros_message = (raspimouse_msgs__srv__LightSensorsService_Response *)raw_ros_message;
  {  // sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
