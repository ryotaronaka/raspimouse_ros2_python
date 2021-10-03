// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspimouse_msgs:action/Music.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
#include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspimouse_msgs/action/detail/music__functions.h"
#include "raspimouse_msgs/action/detail/music__struct.h"


// Include directives for member types
// Member `freqs`
// Member `durations`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_Goal__init(message_memory);
}

void Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_member_array[2] = {
  {
    "freqs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_Goal, freqs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "durations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_Goal, durations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_Goal",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Music_Goal),
  Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_member_array,  // message members
  Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_type_support_handle = {
  0,
  &Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_Goal)() {
  if (!Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_type_support_handle.typesupport_identifier) {
    Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_Goal__rosidl_typesupport_introspection_c__Music_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Music_Result__rosidl_typesupport_introspection_c__Music_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_Result__init(message_memory);
}

void Music_Result__rosidl_typesupport_introspection_c__Music_Result_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_member_array[1] = {
  {
    "finished",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_Result, finished),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_Result",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__Music_Result),
  Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_member_array,  // message members
  Music_Result__rosidl_typesupport_introspection_c__Music_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_Result__rosidl_typesupport_introspection_c__Music_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_type_support_handle = {
  0,
  &Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_Result)() {
  if (!Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_type_support_handle.typesupport_identifier) {
    Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_Result__rosidl_typesupport_introspection_c__Music_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_Feedback__init(message_memory);
}

void Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_member_array[1] = {
  {
    "remaining_steps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_Feedback, remaining_steps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_Feedback",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__Music_Feedback),
  Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_member_array,  // message members
  Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_type_support_handle = {
  0,
  &Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_Feedback)() {
  if (!Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_type_support_handle.typesupport_identifier) {
    Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_Feedback__rosidl_typesupport_introspection_c__Music_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "raspimouse_msgs/action/music.h"
// Member `goal`
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_SendGoal_Request__init(message_memory);
}

void Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Music_SendGoal_Request),
  Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_member_array,  // message members
  Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_type_support_handle = {
  0,
  &Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal_Request)() {
  Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_Goal)();
  if (!Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_SendGoal_Request__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_SendGoal_Response__init(message_memory);
}

void Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Music_SendGoal_Response),
  Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_member_array,  // message members
  Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_type_support_handle = {
  0,
  &Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal_Response)() {
  Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_SendGoal_Response__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_members = {
  "raspimouse_msgs__action",  // service namespace
  "Music_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_type_support_handle = {
  0,
  &raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal)() {
  if (!raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_SendGoal_Response)()->data;
  }

  return &raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_GetResult_Request__init(message_memory);
}

void Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(raspimouse_msgs__action__Music_GetResult_Request),
  Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_member_array,  // message members
  Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_type_support_handle = {
  0,
  &Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult_Request)() {
  Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_GetResult_Request__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "raspimouse_msgs/action/music.h"
// Member `result`
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_GetResult_Response__init(message_memory);
}

void Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Music_GetResult_Response),
  Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_member_array,  // message members
  Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_type_support_handle = {
  0,
  &Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult_Response)() {
  Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_Result)();
  if (!Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_GetResult_Response__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_members = {
  "raspimouse_msgs__action",  // service namespace
  "Music_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_type_support_handle = {
  0,
  &raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult)() {
  if (!raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_type_support_handle.typesupport_identifier) {
    raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_GetResult_Response)()->data;
  }

  return &raspimouse_msgs__action__detail__music__rosidl_typesupport_introspection_c__Music_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"
// already included above
// #include "raspimouse_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__functions.h"
// already included above
// #include "raspimouse_msgs/action/detail/music__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/music.h"
// Member `feedback`
// already included above
// #include "raspimouse_msgs/action/detail/music__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspimouse_msgs__action__Music_FeedbackMessage__init(message_memory);
}

void Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_fini_function(void * message_memory)
{
  raspimouse_msgs__action__Music_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspimouse_msgs__action__Music_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_members = {
  "raspimouse_msgs__action",  // message namespace
  "Music_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(raspimouse_msgs__action__Music_FeedbackMessage),
  Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_member_array,  // message members
  Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_type_support_handle = {
  0,
  &Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspimouse_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_FeedbackMessage)() {
  Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspimouse_msgs, action, Music_Feedback)();
  if (!Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Music_FeedbackMessage__rosidl_typesupport_introspection_c__Music_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
