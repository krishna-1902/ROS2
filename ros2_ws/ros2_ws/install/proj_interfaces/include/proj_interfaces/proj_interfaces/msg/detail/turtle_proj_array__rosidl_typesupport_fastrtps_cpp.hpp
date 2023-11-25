// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from proj_interfaces:msg/TurtleProjArray.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "proj_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "proj_interfaces/msg/detail/turtle_proj_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace proj_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proj_interfaces
cdr_serialize(
  const proj_interfaces::msg::TurtleProjArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proj_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  proj_interfaces::msg::TurtleProjArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proj_interfaces
get_serialized_size(
  const proj_interfaces::msg::TurtleProjArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proj_interfaces
max_serialized_size_TurtleProjArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace proj_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_proj_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, proj_interfaces, msg, TurtleProjArray)();

#ifdef __cplusplus
}
#endif

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
