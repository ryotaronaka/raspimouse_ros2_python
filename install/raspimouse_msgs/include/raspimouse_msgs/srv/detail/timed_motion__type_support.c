// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:srv/TimedMotion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/srv/detail/timed_motion__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/srv/detail/timed_motion__functions.h"
#include "raspimouse_msgs/srv/detail/timed_motion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__srv__TimedMotion_Request__init(message_memory);
}

void TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__srv__TimedMotion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_member_array[3] = {
  {
    "left_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__srv__TimedMotion_Request, left_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__srv__TimedMotion_Request, right_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__srv__TimedMotion_Request, duration_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_members = {
  "raspimouse_msgs__srv",  // message namespace
  "TimedMotion_Request",  // message name
  3,  // number of fields
  sizeof(raspimouse_msgs__srv__TimedMotion_Request),
  TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_member_array,  // message members
  TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_type_support_handle = {
  0,
  &TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion_Request)() {
  if (!TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_type_support_handle.typesupport_identifier) {
    TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TimedMotion_Request__rosidl_typesupport_introspection_c__TimedMotion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion__functions.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__srv__TimedMotion_Response__init(message_memory);
}

void TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__srv__TimedMotion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__srv__TimedMotion_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_members = {
  "raspimouse_msgs__srv",  // message namespace
  "TimedMotion_Response",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__srv__TimedMotion_Response),
  TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_member_array,  // message members
  TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_type_support_handle = {
  0,
  &TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion_Response)() {
  if (!TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_type_support_handle.typesupport_identifier) {
    TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TimedMotion_Response__rosidl_typesupport_introspection_c__TimedMotion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/srv/detail/timed_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_members = {
  "raspimouse_msgs__srv",  // service namespace
  "TimedMotion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_type_support_handle = {
  0,
  &raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion)() {
  if (!raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, srv, TimedMotion_Response)()->data;
  }

  return &raspimouse_msgs__srv__detail__timed_motion__rosidl_typesupport_introspection_c__TimedMotion_service_type_support_handle;
}
