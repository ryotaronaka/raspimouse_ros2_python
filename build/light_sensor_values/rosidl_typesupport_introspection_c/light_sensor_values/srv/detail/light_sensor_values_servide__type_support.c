// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from light_sensor_values:srv/LightSensorValuesServide.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "light_sensor_values/srv/detail/light_sensor_values_servide__rosidl_typesupport_introspection_c.h"
#include "light_sensor_values/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "light_sensor_values/srv/detail/light_sensor_values_servide__functions.h"
#include "light_sensor_values/srv/detail/light_sensor_values_servide__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  light_sensor_values__srv__LightSensorValuesServide_Request__init(message_memory);
}

void LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_fini_function(void * message_memory)
{
  light_sensor_values__srv__LightSensorValuesServide_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_member_array[4] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__srv__LightSensorValuesServide_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__srv__LightSensorValuesServide_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__srv__LightSensorValuesServide_Request, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__srv__LightSensorValuesServide_Request, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_members = {
  "light_sensor_values__srv",  // message namespace
  "LightSensorValuesServide_Request",  // message name
  4,  // number of fields
  sizeof(light_sensor_values__srv__LightSensorValuesServide_Request),
  LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_member_array,  // message members
  LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_type_support_handle = {
  0,
  &LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_light_sensor_values
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide_Request)() {
  if (!LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_type_support_handle.typesupport_identifier) {
    LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LightSensorValuesServide_Request__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "light_sensor_values/srv/detail/light_sensor_values_servide__rosidl_typesupport_introspection_c.h"
// already included above
// #include "light_sensor_values/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "light_sensor_values/srv/detail/light_sensor_values_servide__functions.h"
// already included above
// #include "light_sensor_values/srv/detail/light_sensor_values_servide__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  light_sensor_values__srv__LightSensorValuesServide_Response__init(message_memory);
}

void LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_fini_function(void * message_memory)
{
  light_sensor_values__srv__LightSensorValuesServide_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(light_sensor_values__srv__LightSensorValuesServide_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_members = {
  "light_sensor_values__srv",  // message namespace
  "LightSensorValuesServide_Response",  // message name
  1,  // number of fields
  sizeof(light_sensor_values__srv__LightSensorValuesServide_Response),
  LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_member_array,  // message members
  LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_type_support_handle = {
  0,
  &LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_light_sensor_values
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide_Response)() {
  if (!LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_type_support_handle.typesupport_identifier) {
    LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LightSensorValuesServide_Response__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "light_sensor_values/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "light_sensor_values/srv/detail/light_sensor_values_servide__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_members = {
  "light_sensor_values__srv",  // service namespace
  "LightSensorValuesServide",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_Request_message_type_support_handle,
  NULL  // response message
  // light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_Response_message_type_support_handle
};

static rosidl_service_type_support_t light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_type_support_handle = {
  0,
  &light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_light_sensor_values
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide)() {
  if (!light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_type_support_handle.typesupport_identifier) {
    light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, light_sensor_values, srv, LightSensorValuesServide_Response)()->data;
  }

  return &light_sensor_values__srv__detail__light_sensor_values_servide__rosidl_typesupport_introspection_c__LightSensorValuesServide_service_type_support_handle;
}
