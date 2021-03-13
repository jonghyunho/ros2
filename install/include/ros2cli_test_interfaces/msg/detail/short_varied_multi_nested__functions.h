// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2cli_test_interfaces:msg\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED_MULTI_NESTED__FUNCTIONS_H_
#define ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED_MULTI_NESTED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2cli_test_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ros2cli_test_interfaces/msg/detail/short_varied_multi_nested__struct.h"

/// Initialize msg/ShortVariedMultiNested message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested
 * )) before or use
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
bool
ros2cli_test_interfaces__msg__ShortVariedMultiNested__init(ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg);

/// Finalize msg/ShortVariedMultiNested message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini(ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg);

/// Create msg/ShortVariedMultiNested message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
ros2cli_test_interfaces__msg__ShortVariedMultiNested *
ros2cli_test_interfaces__msg__ShortVariedMultiNested__create();

/// Destroy msg/ShortVariedMultiNested message.
/**
 * It calls
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__destroy(ros2cli_test_interfaces__msg__ShortVariedMultiNested * msg);


/// Initialize array of msg/ShortVariedMultiNested messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
bool
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__init(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array, size_t size);

/// Finalize array of msg/ShortVariedMultiNested messages.
/**
 * It calls
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__fini(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array);

/// Create array of msg/ShortVariedMultiNested messages.
/**
 * It allocates the memory for the array and calls
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence *
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__create(size_t size);

/// Destroy array of msg/ShortVariedMultiNested messages.
/**
 * It calls
 * ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2cli_test_interfaces
void
ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence__destroy(ros2cli_test_interfaces__msg__ShortVariedMultiNested__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED_MULTI_NESTED__FUNCTIONS_H_
