// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from proj_interfaces:msg/TurtleProjArray.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__STRUCT_HPP_
#define PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'turtles'
#include "proj_interfaces/msg/detail/turtle_proj__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__proj_interfaces__msg__TurtleProjArray __attribute__((deprecated))
#else
# define DEPRECATED__proj_interfaces__msg__TurtleProjArray __declspec(deprecated)
#endif

namespace proj_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleProjArray_
{
  using Type = TurtleProjArray_<ContainerAllocator>;

  explicit TurtleProjArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TurtleProjArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turtles_type =
    std::vector<proj_interfaces::msg::TurtleProj_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<proj_interfaces::msg::TurtleProj_<ContainerAllocator>>>;
  _turtles_type turtles;

  // setters for named parameter idiom
  Type & set__turtles(
    const std::vector<proj_interfaces::msg::TurtleProj_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<proj_interfaces::msg::TurtleProj_<ContainerAllocator>>> & _arg)
  {
    this->turtles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    proj_interfaces::msg::TurtleProjArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const proj_interfaces::msg::TurtleProjArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::msg::TurtleProjArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::msg::TurtleProjArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__proj_interfaces__msg__TurtleProjArray
    std::shared_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__proj_interfaces__msg__TurtleProjArray
    std::shared_ptr<proj_interfaces::msg::TurtleProjArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleProjArray_ & other) const
  {
    if (this->turtles != other.turtles) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleProjArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleProjArray_

// alias to use template instance with default allocator
using TurtleProjArray =
  proj_interfaces::msg::TurtleProjArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace proj_interfaces

#endif  // PROJ_INTERFACES__MSG__DETAIL__TURTLE_PROJ_ARRAY__STRUCT_HPP_
