// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:srv/LightSensorsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__STRUCT_H_
#define RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/LightSensorsService in the package raspimouse_msgs.
typedef struct raspimouse_msgs__srv__LightSensorsService_Request
{
  int16_t a;
  int16_t b;
  int16_t c;
  int16_t d;
} raspimouse_msgs__srv__LightSensorsService_Request;

// Struct for a sequence of raspimouse_msgs__srv__LightSensorsService_Request.
typedef struct raspimouse_msgs__srv__LightSensorsService_Request__Sequence
{
  raspimouse_msgs__srv__LightSensorsService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__srv__LightSensorsService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LightSensorsService in the package raspimouse_msgs.
typedef struct raspimouse_msgs__srv__LightSensorsService_Response
{
  int16_t sum;
} raspimouse_msgs__srv__LightSensorsService_Response;

// Struct for a sequence of raspimouse_msgs__srv__LightSensorsService_Response.
typedef struct raspimouse_msgs__srv__LightSensorsService_Response__Sequence
{
  raspimouse_msgs__srv__LightSensorsService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__srv__LightSensorsService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__STRUCT_H_
