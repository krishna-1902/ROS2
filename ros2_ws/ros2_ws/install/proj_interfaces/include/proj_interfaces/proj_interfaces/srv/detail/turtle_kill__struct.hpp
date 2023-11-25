// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from proj_interfaces:srv/TurtleKill.idl
// generated code does not contain a copyright notice

#ifndef PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__STRUCT_HPP_
#define PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__proj_interfaces__srv__TurtleKill_Request __attribute__((deprecated))
#else
# define DEPRECATED__proj_interfaces__srv__TurtleKill_Request __declspec(deprecated)
#endif

namespace proj_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleKill_Request_
{
  using Type = TurtleKill_Request_<ContainerAllocator>;

  explicit TurtleKill_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit TurtleKill_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__proj_interfaces__srv__TurtleKill_Request
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__proj_interfaces__srv__TurtleKill_Request
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleKill_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleKill_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleKill_Request_

// alias to use template instance with default allocator
using TurtleKill_Request =
  proj_interfaces::srv::TurtleKill_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace proj_interfaces


#ifndef _WIN32
# define DEPRECATED__proj_interfaces__srv__TurtleKill_Response __attribute__((deprecated))
#else
# define DEPRECATED__proj_interfaces__srv__TurtleKill_Response __declspec(deprecated)
#endif

namespace proj_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleKill_Response_
{
  using Type = TurtleKill_Response_<ContainerAllocator>;

  explicit TurtleKill_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TurtleKill_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__proj_interfaces__srv__TurtleKill_Response
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__proj_interfaces__srv__TurtleKill_Response
    std::shared_ptr<proj_interfaces::srv::TurtleKill_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleKill_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleKill_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleKill_Response_

// alias to use template instance with default allocator
using TurtleKill_Response =
  proj_interfaces::srv::TurtleKill_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace proj_interfaces

namespace proj_interfaces
{

namespace srv
{

struct TurtleKill
{
  using Request = proj_interfaces::srv::TurtleKill_Request;
  using Response = proj_interfaces::srv::TurtleKill_Response;
};

}  // namespace srv

}  // namespace proj_interfaces

#endif  // PROJ_INTERFACES__SRV__DETAIL__TURTLE_KILL__STRUCT_HPP_
