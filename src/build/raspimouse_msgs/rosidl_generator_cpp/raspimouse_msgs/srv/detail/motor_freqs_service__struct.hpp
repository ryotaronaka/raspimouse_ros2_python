// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raspimouse_msgs:srv/MotorFreqsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__STRUCT_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Request __attribute__((deprecated))
#else
# define DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Request __declspec(deprecated)
#endif

namespace raspimouse_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorFreqsService_Request_
{
  using Type = MotorFreqsService_Request_<ContainerAllocator>;

  explicit MotorFreqsService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->e = 0;
      this->f = 0;
    }
  }

  explicit MotorFreqsService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->e = 0;
      this->f = 0;
    }
  }

  // field types and members
  using _e_type =
    int16_t;
  _e_type e;
  using _f_type =
    int16_t;
  _f_type f;

  // setters for named parameter idiom
  Type & set__e(
    const int16_t & _arg)
  {
    this->e = _arg;
    return *this;
  }
  Type & set__f(
    const int16_t & _arg)
  {
    this->f = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Request
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Request
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorFreqsService_Request_ & other) const
  {
    if (this->e != other.e) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorFreqsService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorFreqsService_Request_

// alias to use template instance with default allocator
using MotorFreqsService_Request =
  raspimouse_msgs::srv::MotorFreqsService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace raspimouse_msgs


#ifndef _WIN32
# define DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Response __attribute__((deprecated))
#else
# define DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Response __declspec(deprecated)
#endif

namespace raspimouse_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorFreqsService_Response_
{
  using Type = MotorFreqsService_Response_<ContainerAllocator>;

  explicit MotorFreqsService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0;
    }
  }

  explicit MotorFreqsService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0;
    }
  }

  // field types and members
  using _sum_type =
    int16_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int16_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Response
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspimouse_msgs__srv__MotorFreqsService_Response
    std::shared_ptr<raspimouse_msgs::srv::MotorFreqsService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorFreqsService_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorFreqsService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorFreqsService_Response_

// alias to use template instance with default allocator
using MotorFreqsService_Response =
  raspimouse_msgs::srv::MotorFreqsService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace raspimouse_msgs

namespace raspimouse_msgs
{

namespace srv
{

struct MotorFreqsService
{
  using Request = raspimouse_msgs::srv::MotorFreqsService_Request;
  using Response = raspimouse_msgs::srv::MotorFreqsService_Response;
};

}  // namespace srv

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__MOTOR_FREQS_SERVICE__STRUCT_HPP_
