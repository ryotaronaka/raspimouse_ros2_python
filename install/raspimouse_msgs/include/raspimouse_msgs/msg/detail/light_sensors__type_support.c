// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:msg/LightSensors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/msg/detail/light_sensors__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/msg/detail/light_sensors__functions.h"
#include "raspimouse_msgs/msg/detail/light_sensors__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LightSensors__rosidl_typesupport_introspection_c__LightSensors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__msg__LightSensors__init(message_memory);
}

void LightSensors__rosidl_typesupport_introspection_c__LightSensors_fini_function(void * message_memory)
{
  raspimouse_msgs__msg__LightSensors__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_member_array[6] = {
  {
    "right_forward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__msg__LightSensors, right_forward),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__msg__LightSensors, right_side),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__msg__LightSensors, left_side),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__msg__LightSensors, left_forward),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__msg__LightSensors, sum_all),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__msg__LightSensors, sum_forward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_members = {
  "raspimouse_msgs__msg",  // message namespace
  "LightSensors",  // message name
  6,  // number of fields
  sizeof(raspimouse_msgs__msg__LightSensors),
  LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_member_array,  // message members
  LightSensors__rosidl_typesupport_introspection_c__LightSensors_init_function,  // function to initialize message memory (memory has to be allocated)
  LightSensors__rosidl_typesupport_introspection_c__LightSensors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_type_support_handle = {
  0,
  &LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, msg, LightSensors)() {
  if (!LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_type_support_handle.typesupport_identifier) {
    LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LightSensors__rosidl_typesupport_introspection_c__LightSensors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
