// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from light_sensor_values:srv/LightSensorValuesService.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__STRUCT_H_
#define LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/LightSensorValuesService in the package light_sensor_values.
typedef struct light_sensor_values__srv__LightSensorValuesService_Request
{
  int16_t a;
  int16_t b;
  int16_t c;
  int16_t d;
} light_sensor_values__srv__LightSensorValuesService_Request;

// Struct for a sequence of light_sensor_values__srv__LightSensorValuesService_Request.
typedef struct light_sensor_values__srv__LightSensorValuesService_Request__Sequence
{
  light_sensor_values__srv__LightSensorValuesService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} light_sensor_values__srv__LightSensorValuesService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/LightSensorValuesService in the package light_sensor_values.
typedef struct light_sensor_values__srv__LightSensorValuesService_Response
{
  int16_t sum;
} light_sensor_values__srv__LightSensorValuesService_Response;

// Struct for a sequence of light_sensor_values__srv__LightSensorValuesService_Response.
typedef struct light_sensor_values__srv__LightSensorValuesService_Response__Sequence
{
  light_sensor_values__srv__LightSensorValuesService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} light_sensor_values__srv__LightSensorValuesService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__STRUCT_H_
