// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from light_sensor_values:srv/LightSensorValuesService.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__FUNCTIONS_H_
#define LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "light_sensor_values/msg/rosidl_generator_c__visibility_control.h"

#include "light_sensor_values/srv/detail/light_sensor_values_service__struct.h"

/// Initialize srv/LightSensorValuesService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * light_sensor_values__srv__LightSensorValuesService_Request
 * )) before or use
 * light_sensor_values__srv__LightSensorValuesService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesService_Request__init(light_sensor_values__srv__LightSensorValuesService_Request * msg);

/// Finalize srv/LightSensorValuesService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Request__fini(light_sensor_values__srv__LightSensorValuesService_Request * msg);

/// Create srv/LightSensorValuesService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * light_sensor_values__srv__LightSensorValuesService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesService_Request *
light_sensor_values__srv__LightSensorValuesService_Request__create();

/// Destroy srv/LightSensorValuesService message.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Request__destroy(light_sensor_values__srv__LightSensorValuesService_Request * msg);


/// Initialize array of srv/LightSensorValuesService messages.
/**
 * It allocates the memory for the number of elements and calls
 * light_sensor_values__srv__LightSensorValuesService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesService_Request__Sequence__init(light_sensor_values__srv__LightSensorValuesService_Request__Sequence * array, size_t size);

/// Finalize array of srv/LightSensorValuesService messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Request__Sequence__fini(light_sensor_values__srv__LightSensorValuesService_Request__Sequence * array);

/// Create array of srv/LightSensorValuesService messages.
/**
 * It allocates the memory for the array and calls
 * light_sensor_values__srv__LightSensorValuesService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesService_Request__Sequence *
light_sensor_values__srv__LightSensorValuesService_Request__Sequence__create(size_t size);

/// Destroy array of srv/LightSensorValuesService messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Request__Sequence__destroy(light_sensor_values__srv__LightSensorValuesService_Request__Sequence * array);

/// Initialize srv/LightSensorValuesService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * light_sensor_values__srv__LightSensorValuesService_Response
 * )) before or use
 * light_sensor_values__srv__LightSensorValuesService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesService_Response__init(light_sensor_values__srv__LightSensorValuesService_Response * msg);

/// Finalize srv/LightSensorValuesService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Response__fini(light_sensor_values__srv__LightSensorValuesService_Response * msg);

/// Create srv/LightSensorValuesService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * light_sensor_values__srv__LightSensorValuesService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesService_Response *
light_sensor_values__srv__LightSensorValuesService_Response__create();

/// Destroy srv/LightSensorValuesService message.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Response__destroy(light_sensor_values__srv__LightSensorValuesService_Response * msg);


/// Initialize array of srv/LightSensorValuesService messages.
/**
 * It allocates the memory for the number of elements and calls
 * light_sensor_values__srv__LightSensorValuesService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesService_Response__Sequence__init(light_sensor_values__srv__LightSensorValuesService_Response__Sequence * array, size_t size);

/// Finalize array of srv/LightSensorValuesService messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Response__Sequence__fini(light_sensor_values__srv__LightSensorValuesService_Response__Sequence * array);

/// Create array of srv/LightSensorValuesService messages.
/**
 * It allocates the memory for the array and calls
 * light_sensor_values__srv__LightSensorValuesService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesService_Response__Sequence *
light_sensor_values__srv__LightSensorValuesService_Response__Sequence__create(size_t size);

/// Destroy array of srv/LightSensorValuesService messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesService_Response__Sequence__destroy(light_sensor_values__srv__LightSensorValuesService_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVICE__FUNCTIONS_H_
