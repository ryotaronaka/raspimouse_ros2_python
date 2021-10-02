// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from raspimouse_msgs:msg/MotorFreqs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "raspimouse_msgs/msg/detail/motor_freqs__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace raspimouse_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorFreqs_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) raspimouse_msgs::msg::MotorFreqs(_init);
}

void MotorFreqs_fini_function(void * message_memory)
{
  auto typed_message = static_cast<raspimouse_msgs::msg::MotorFreqs *>(message_memory);
  typed_message->~MotorFreqs();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorFreqs_message_member_array[2] = {
  {
    "right_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs::msg::MotorFreqs, right_hz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs::msg::MotorFreqs, left_hz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorFreqs_message_members = {
  "raspimouse_msgs::msg",  // message namespace
  "MotorFreqs",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs::msg::MotorFreqs),
  MotorFreqs_message_member_array,  // message members
  MotorFreqs_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorFreqs_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorFreqs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorFreqs_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace raspimouse_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<raspimouse_msgs::msg::MotorFreqs>()
{
  return &::raspimouse_msgs::msg::rosidl_typesupport_introspection_cpp::MotorFreqs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, raspimouse_msgs, msg, MotorFreqs)() {
  return &::raspimouse_msgs::msg::rosidl_typesupport_introspection_cpp::MotorFreqs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
