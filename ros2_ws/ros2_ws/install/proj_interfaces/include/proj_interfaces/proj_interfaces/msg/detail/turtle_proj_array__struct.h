// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from proj_interfaces:msg/TurtleProjArray.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__STRUCT_H_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "proj_interfaces/msg/detail/turtle_proj__struct.h"

/// Struct defined in msg/TurtleProjArray in the package proj_interfaces.
typedef struct proj_interfaces__msg__TurtleProjArray
{
  proj_interfaces__msg__TurtleProj__Sequence turtles;
} proj_interfaces__msg__TurtleProjArray;

// Struct for a sequence of proj_interfaces__msg__TurtleProjArray.
typedef struct proj_interfaces__msg__TurtleProjArray__Sequence
{
  proj_interfaces__msg__TurtleProjArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} proj_interfaces__msg__TurtleProjArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__STRUCT_H_
