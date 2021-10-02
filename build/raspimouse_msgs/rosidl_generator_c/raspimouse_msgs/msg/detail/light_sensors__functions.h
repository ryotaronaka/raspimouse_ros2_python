// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from raspimouse_msgs:msg/LightSensors.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__FUNCTIONS_H_
#define RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "raspimouse_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "raspimouse_msgs/msg/detail/light_sensors__struct.h"

/// Initialize msg/LightSensors message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * raspimouse_msgs__msg__LightSensors
 * )) before or use
 * raspimouse_msgs__msg__LightSensors__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__msg__LightSensors__init(raspimouse_msgs__msg__LightSensors * msg);

/// Finalize msg/LightSensors message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__LightSensors__fini(raspimouse_msgs__msg__LightSensors * msg);

/// Create msg/LightSensors message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * raspimouse_msgs__msg__LightSensors__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__msg__LightSensors *
raspimouse_msgs__msg__LightSensors__create();

/// Destroy msg/LightSensors message.
/**
 * It calls
 * raspimouse_msgs__msg__LightSensors__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__LightSensors__destroy(raspimouse_msgs__msg__LightSensors * msg);


/// Initialize array of msg/LightSensors messages.
/**
 * It allocates the memory for the number of elements and calls
 * raspimouse_msgs__msg__LightSensors__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
bool
raspimouse_msgs__msg__LightSensors__Sequence__init(raspimouse_msgs__msg__LightSensors__Sequence * array, size_t size);

/// Finalize array of msg/LightSensors messages.
/**
 * It calls
 * raspimouse_msgs__msg__LightSensors__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__LightSensors__Sequence__fini(raspimouse_msgs__msg__LightSensors__Sequence * array);

/// Create array of msg/LightSensors messages.
/**
 * It allocates the memory for the array and calls
 * raspimouse_msgs__msg__LightSensors__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
raspimouse_msgs__msg__LightSensors__Sequence *
raspimouse_msgs__msg__LightSensors__Sequence__create(size_t size);

/// Destroy array of msg/LightSensors messages.
/**
 * It calls
 * raspimouse_msgs__msg__LightSensors__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_raspimouse_msgs
void
raspimouse_msgs__msg__LightSensors__Sequence__destroy(raspimouse_msgs__msg__LightSensors__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__FUNCTIONS_H_
