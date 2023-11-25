// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from proj_interfaces:msg/TurtleProj.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__TRAITS_HPP_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "proj_interfaces/msg/detail/turtle_proj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace proj_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtleProj & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtleProj & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtleProj & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace proj_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use proj_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const proj_interfaces::msg::TurtleProj & msg,
  std::ostream & out, size_t indentation = 0)
{
  proj_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use proj_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const proj_interfaces::msg::TurtleProj & msg)
{
  return proj_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<proj_interfaces::msg::TurtleProj>()
{
  return "proj_interfaces::msg::TurtleProj";
}

template<>
inline const char * name<proj_interfaces::msg::TurtleProj>()
{
  return "proj_interfaces/msg/TurtleProj";
}

template<>
struct has_fixed_size<proj_interfaces::msg::TurtleProj>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<proj_interfaces::msg::TurtleProj>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<proj_interfaces::msg::TurtleProj>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__TRAITS_HPP_
