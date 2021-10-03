// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspimouse_msgs:srv/MotorFreqsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__STRUCT_H_
#define RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MotorFreqsService in the package raspimouse_msgs.
typedef struct raspimouse_msgs__srv__MotorFreqsService_Request
{
  int16_t right_hz;
  int16_t left_hz;
} raspimouse_msgs__srv__MotorFreqsService_Request;

// Struct for a sequence of raspimouse_msgs__srv__MotorFreqsService_Request.
typedef struct raspimouse_msgs__srv__MotorFreqsService_Request__Sequence
{
  raspimouse_msgs__srv__MotorFreqsService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__srv__MotorFreqsService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MotorFreqsService in the package raspimouse_msgs.
typedef struct raspimouse_msgs__srv__MotorFreqsService_Response
{
  uint8_t structure_needs_at_least_one_member;
} raspimouse_msgs__srv__MotorFreqsService_Response;

// Struct for a sequence of raspimouse_msgs__srv__MotorFreqsService_Response.
typedef struct raspimouse_msgs__srv__MotorFreqsService_Response__Sequence
{
  raspimouse_msgs__srv__MotorFreqsService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspimouse_msgs__srv__MotorFreqsService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__STRUCT_H_
