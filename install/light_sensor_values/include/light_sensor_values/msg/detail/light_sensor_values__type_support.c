// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from light_sensor_values:msg/LightSensorValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "light_sensor_values/msg/detail/light_sensor_values__rosidl_typesupport_introspection_c.h"
#include "light_sensor_values/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "light_sensor_values/msg/detail/light_sensor_values__functions.h"
#include "light_sensor_values/msg/detail/light_sensor_values__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  light_sensor_values__msg__LightSensorValues__init(message_memory);
}

void LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_fini_function(void * message_memory)
{
  light_sensor_values__msg__LightSensorValues__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_member_array[6] = {
  {
    "right_forward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__msg__LightSensorValues, right_forward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_side",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__msg__LightSensorValues, right_side),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_side",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__msg__LightSensorValues, left_side),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_forward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__msg__LightSensorValues, left_forward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sum_all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__msg__LightSensorValues, sum_all),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sum_forward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__msg__LightSensorValues, sum_forward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_members = {
  "light_sensor_values__msg",  // message namespace
  "LightSensorValues",  // message name
  6,  // number of fields
  sizeof(light_sensor_values__msg__LightSensorValues),
  LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_member_array,  // message members
  LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_init_function,  // function to initialize message memory (memory has to be allocated)
  LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_type_support_handle = {
  0,
  &LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_light_sensor_values
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, msg, LightSensorValues)() {
  if (!LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_type_support_handle.typesupport_identifier) {
    LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LightSensorValues__rosidl_typesupport_introspection_c__LightSensorValues_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
