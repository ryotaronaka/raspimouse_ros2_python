// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:srv/MotorFreqsService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/srv/detail/motor_freqs_service__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/srv/detail/motor_freqs_service__functions.h"
#include "raspimouse_msgs/srv/detail/motor_freqs_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__srv__MotorFreqsService_Request__init(message_memory);
}

void MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__srv__MotorFreqsService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_member_array[2] = {
  {
    "right_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__srv__MotorFreqsService_Request, right_hz),  // bytes offset in struct
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
    offsetof(raspimouse_msgs__srv__MotorFreqsService_Request, left_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_members = {
  "raspimouse_msgs__srv",  // message namespace
  "MotorFreqsService_Request",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__srv__MotorFreqsService_Request),
  MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_member_array,  // message members
  MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_type_support_handle = {
  0,
  &MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService_Request)() {
  if (!MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_type_support_handle.typesupport_identifier) {
    MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorFreqsService_Request__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/srv/detail/motor_freqs_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/srv/detail/motor_freqs_service__functions.h"
// already included above
// #include "raspimouse_msgs/srv/detail/motor_freqs_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__srv__MotorFreqsService_Response__init(message_memory);
}

void MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__srv__MotorFreqsService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__srv__MotorFreqsService_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_members = {
  "raspimouse_msgs__srv",  // message namespace
  "MotorFreqsService_Response",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__srv__MotorFreqsService_Response),
  MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_member_array,  // message members
  MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_type_support_handle = {
  0,
  &MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService_Response)() {
  if (!MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_type_support_handle.typesupport_identifier) {
    MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorFreqsService_Response__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/srv/detail/motor_freqs_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_members = {
  "raspimouse_msgs__srv",  // service namespace
  "MotorFreqsService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_type_support_handle = {
  0,
  &raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService)() {
  if (!raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, MotorFreqsService_Response)()->data;
  }

  return &raspimouse_msgs__srv__detail__motor_freqs_service__rosidl_typesupport_introspection_c__MotorFreqsService_service_type_support_handle;
}
