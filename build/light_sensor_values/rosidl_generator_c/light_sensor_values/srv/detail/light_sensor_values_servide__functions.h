// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from light_sensor_values:srv/LightSensorValuesServide.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__FUNCTIONS_H_
#define LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "light_sensor_values/msg/rosidl_generator_c__visibility_control.h"

#include "light_sensor_values/srv/detail/light_sensor_values_servide__struct.h"

/// Initialize srv/LightSensorValuesServide message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * light_sensor_values__srv__LightSensorValuesServide_Request
 * )) before or use
 * light_sensor_values__srv__LightSensorValuesServide_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesServide_Request__init(light_sensor_values__srv__LightSensorValuesServide_Request * msg);

/// Finalize srv/LightSensorValuesServide message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Request__fini(light_sensor_values__srv__LightSensorValuesServide_Request * msg);

/// Create srv/LightSensorValuesServide message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * light_sensor_values__srv__LightSensorValuesServide_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesServide_Request *
light_sensor_values__srv__LightSensorValuesServide_Request__create();

/// Destroy srv/LightSensorValuesServide message.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesServide_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Request__destroy(light_sensor_values__srv__LightSensorValuesServide_Request * msg);


/// Initialize array of srv/LightSensorValuesServide messages.
/**
 * It allocates the memory for the number of elements and calls
 * light_sensor_values__srv__LightSensorValuesServide_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__init(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array, size_t size);

/// Finalize array of srv/LightSensorValuesServide messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesServide_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__fini(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array);

/// Create array of srv/LightSensorValuesServide messages.
/**
 * It allocates the memory for the array and calls
 * light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence *
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__create(size_t size);

/// Destroy array of srv/LightSensorValuesServide messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Request__Sequence__destroy(light_sensor_values__srv__LightSensorValuesServide_Request__Sequence * array);

/// Initialize srv/LightSensorValuesServide message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * light_sensor_values__srv__LightSensorValuesServide_Response
 * )) before or use
 * light_sensor_values__srv__LightSensorValuesServide_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesServide_Response__init(light_sensor_values__srv__LightSensorValuesServide_Response * msg);

/// Finalize srv/LightSensorValuesServide message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Response__fini(light_sensor_values__srv__LightSensorValuesServide_Response * msg);

/// Create srv/LightSensorValuesServide message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * light_sensor_values__srv__LightSensorValuesServide_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesServide_Response *
light_sensor_values__srv__LightSensorValuesServide_Response__create();

/// Destroy srv/LightSensorValuesServide message.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesServide_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Response__destroy(light_sensor_values__srv__LightSensorValuesServide_Response * msg);


/// Initialize array of srv/LightSensorValuesServide messages.
/**
 * It allocates the memory for the number of elements and calls
 * light_sensor_values__srv__LightSensorValuesServide_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
bool
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__init(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array, size_t size);

/// Finalize array of srv/LightSensorValuesServide messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesServide_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__fini(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array);

/// Create array of srv/LightSensorValuesServide messages.
/**
 * It allocates the memory for the array and calls
 * light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence *
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__create(size_t size);

/// Destroy array of srv/LightSensorValuesServide messages.
/**
 * It calls
 * light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_light_sensor_values
void
light_sensor_values__srv__LightSensorValuesServide_Response__Sequence__destroy(light_sensor_values__srv__LightSensorValuesServide_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__FUNCTIONS_H_
