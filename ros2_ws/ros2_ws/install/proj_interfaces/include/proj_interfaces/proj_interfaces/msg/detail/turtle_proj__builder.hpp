// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from proj_interfaces:msg/TurtleProj.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__BUILDER_HPP_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "proj_interfaces/msg/detail/turtle_proj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace proj_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleProj_name
{
public:
  explicit Init_TurtleProj_name(::proj_interfaces::msg::TurtleProj & msg)
  : msg_(msg)
  {}
  ::proj_interfaces::msg::TurtleProj name(::proj_interfaces::msg::TurtleProj::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::proj_interfaces::msg::TurtleProj msg_;
};

class Init_TurtleProj_theta
{
public:
  explicit Init_TurtleProj_theta(::proj_interfaces::msg::TurtleProj & msg)
  : msg_(msg)
  {}
  Init_TurtleProj_name theta(::proj_interfaces::msg::TurtleProj::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_TurtleProj_name(msg_);
  }

private:
  ::proj_interfaces::msg::TurtleProj msg_;
};

class Init_TurtleProj_y
{
public:
  explicit Init_TurtleProj_y(::proj_interfaces::msg::TurtleProj & msg)
  : msg_(msg)
  {}
  Init_TurtleProj_theta y(::proj_interfaces::msg::TurtleProj::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TurtleProj_theta(msg_);
  }

private:
  ::proj_interfaces::msg::TurtleProj msg_;
};

class Init_TurtleProj_x
{
public:
  Init_TurtleProj_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleProj_y x(::proj_interfaces::msg::TurtleProj::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleProj_y(msg_);
  }

private:
  ::proj_interfaces::msg::TurtleProj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::proj_interfaces::msg::TurtleProj>()
{
  return proj_interfaces::msg::builder::Init_TurtleProj_x();
}

}  // namespace proj_interfaces

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__BUILDER_HPP_
