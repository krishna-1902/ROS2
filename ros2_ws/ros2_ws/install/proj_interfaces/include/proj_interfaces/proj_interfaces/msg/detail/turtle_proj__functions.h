// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from proj_interfaces:msg/TurtleProj.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__FUNCTIONS_H_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "proj_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "proj_interfaces/msg/detail/turtle_proj__struct.h"

/// Initialize msg/TurtleProj message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * proj_interfaces__msg__TurtleProj
 * )) before or use
 * proj_interfaces__msg__TurtleProj__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__msg__TurtleProj__init(proj_interfaces__msg__TurtleProj * msg);

/// Finalize msg/TurtleProj message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__msg__TurtleProj__fini(proj_interfaces__msg__TurtleProj * msg);

/// Create msg/TurtleProj message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * proj_interfaces__msg__TurtleProj__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
proj_interfaces__msg__TurtleProj *
proj_interfaces__msg__TurtleProj__create();

/// Destroy msg/TurtleProj message.
/**
 * It calls
 * proj_interfaces__msg__TurtleProj__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__msg__TurtleProj__destroy(proj_interfaces__msg__TurtleProj * msg);

/// Check for msg/TurtleProj message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__msg__TurtleProj__are_equal(const proj_interfaces__msg__TurtleProj * lhs, const proj_interfaces__msg__TurtleProj * rhs);

/// Copy a msg/TurtleProj message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__msg__TurtleProj__copy(
  const proj_interfaces__msg__TurtleProj * input,
  proj_interfaces__msg__TurtleProj * output);

/// Initialize array of msg/TurtleProj messages.
/**
 * It allocates the memory for the number of elements and calls
 * proj_interfaces__msg__TurtleProj__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__msg__TurtleProj__Sequence__init(proj_interfaces__msg__TurtleProj__Sequence * array, size_t size);

/// Finalize array of msg/TurtleProj messages.
/**
 * It calls
 * proj_interfaces__msg__TurtleProj__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__msg__TurtleProj__Sequence__fini(proj_interfaces__msg__TurtleProj__Sequence * array);

/// Create array of msg/TurtleProj messages.
/**
 * It allocates the memory for the array and calls
 * proj_interfaces__msg__TurtleProj__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
proj_interfaces__msg__TurtleProj__Sequence *
proj_interfaces__msg__TurtleProj__Sequence__create(size_t size);

/// Destroy array of msg/TurtleProj messages.
/**
 * It calls
 * proj_interfaces__msg__TurtleProj__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
void
proj_interfaces__msg__TurtleProj__Sequence__destroy(proj_interfaces__msg__TurtleProj__Sequence * array);

/// Check for msg/TurtleProj message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__msg__TurtleProj__Sequence__are_equal(const proj_interfaces__msg__TurtleProj__Sequence * lhs, const proj_interfaces__msg__TurtleProj__Sequence * rhs);

/// Copy an array of msg/TurtleProj messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_proj_interfaces
bool
proj_interfaces__msg__TurtleProj__Sequence__copy(
  const proj_interfaces__msg__TurtleProj__Sequence * input,
  proj_interfaces__msg__TurtleProj__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__FUNCTIONS_H_
