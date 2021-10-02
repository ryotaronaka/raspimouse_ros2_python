// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:msg/MotorFreqs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/msg/detail/motor_freqs__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/msg/detail/motor_freqs__functions.h"
#include "raspimouse_msgs/msg/detail/motor_freqs__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__msg__MotorFreqs__init(message_memory);
}

void MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_fini_function(void * message_memory)
{
  raspimouse_msgs__msg__MotorFreqs__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_member_array[2] = {
  {
    "right_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__msg__MotorFreqs, right_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__msg__MotorFreqs, left_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_members = {
  "raspimouse_msgs__msg",  // message namespace
  "MotorFreqs",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__msg__MotorFreqs),
  MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_member_array,  // message members
  MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_type_support_handle = {
  0,
  &MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, msg, MotorFreqs)() {
  if (!MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_type_support_handle.typesupport_identifier) {
    MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorFreqs__rosidl_typesupport_introspection_c__MotorFreqs_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
