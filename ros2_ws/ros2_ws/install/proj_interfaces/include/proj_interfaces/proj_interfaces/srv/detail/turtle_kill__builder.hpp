// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from proj_interfaces:srv/TurtleKill.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__BUILDER_HPP_
#define PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "proj_interfaces/srv/detail/turtle_kill__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace proj_interfaces
{

namespace srv
{

namespace builder
{

class Init_TurtleKill_Request_name
{
public:
  Init_TurtleKill_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::proj_interfaces::srv::TurtleKill_Request name(::proj_interfaces::srv::TurtleKill_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::proj_interfaces::srv::TurtleKill_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::proj_interfaces::srv::TurtleKill_Request>()
{
  return proj_interfaces::srv::builder::Init_TurtleKill_Request_name();
}

}  // namespace proj_interfaces


namespace proj_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::proj_interfaces::srv::TurtleKill_Response>()
{
  return ::proj_interfaces::srv::TurtleKill_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace proj_interfaces

#endif  // PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__BUILDER_HPP_
