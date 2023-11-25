// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from proj_interfaces:msg/TurtleProj.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__STRUCT_H_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TurtleProj in the package proj_interfaces.
typedef struct proj_interfaces__msg__TurtleProj
{
  double x;
  double y;
  double theta;
  rosidl_runtime_c__String name;
} proj_interfaces__msg__TurtleProj;

// Struct for a sequence of proj_interfaces__msg__TurtleProj.
typedef struct proj_interfaces__msg__TurtleProj__Sequence
{
  proj_interfaces__msg__TurtleProj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} proj_interfaces__msg__TurtleProj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__STRUCT_H_
