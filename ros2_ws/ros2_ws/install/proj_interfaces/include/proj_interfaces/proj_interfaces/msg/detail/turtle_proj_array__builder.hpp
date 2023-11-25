// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from proj_interfaces:msg/TurtleProjArray.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__BUILDER_HPP_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "proj_interfaces/msg/detail/turtle_proj_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace proj_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleProjArray_turtles
{
public:
  Init_TurtleProjArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::proj_interfaces::msg::TurtleProjArray turtles(::proj_interfaces::msg::TurtleProjArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::proj_interfaces::msg::TurtleProjArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::proj_interfaces::msg::TurtleProjArray>()
{
  return proj_interfaces::msg::builder::Init_TurtleProjArray_turtles();
}

}  // namespace proj_interfaces

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__BUILDER_HPP_
