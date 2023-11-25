// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from proj_interfaces:msg/TurtleProj.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__STRUCT_HPP_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__proj_interfaces__msg__TurtleProj __attribute__((deprecated))
#else
# define DEPRECATED__proj_interfaces__msg__TurtleProj __declspec(deprecated)
#endif

namespace proj_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleProj_
{
  using Type = TurtleProj_<ContainerAllocator>;

  explicit TurtleProj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->name = "";
    }
  }

  explicit TurtleProj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->name = "";
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _theta_type =
    double;
  _theta_type theta;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    proj_interfaces::msg::TurtleProj_<ContainerAllocator> *;
  using ConstRawPtr =
    const proj_interfaces::msg::TurtleProj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::msg::TurtleProj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::msg::TurtleProj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__proj_interfaces__msg__TurtleProj
    std::shared_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__proj_interfaces__msg__TurtleProj
    std::shared_ptr<proj_interfaces::msg::TurtleProj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleProj_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleProj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleProj_

// alias to use template instance with default allocator
using TurtleProj =
  proj_interfaces::msg::TurtleProj_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace proj_interfaces

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ__STRUCT_HPP_
