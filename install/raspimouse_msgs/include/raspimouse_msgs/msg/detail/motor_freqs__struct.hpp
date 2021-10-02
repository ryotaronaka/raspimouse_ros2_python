// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raspimouse_msgs:msg/MotorFreqs.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__STRUCT_HPP_
#define RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__raspimouse_msgs__msg__MotorFreqs __attribute__((deprecated))
#else
# define DEPRECATED__raspimouse_msgs__msg__MotorFreqs __declspec(deprecated)
#endif

namespace raspimouse_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorFreqs_
{
  using Type = MotorFreqs_<ContainerAllocator>;

  explicit MotorFreqs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_hz = 0;
      this->left_hz = 0;
    }
  }

  explicit MotorFreqs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_hz = 0;
      this->left_hz = 0;
    }
  }

  // field types and members
  using _right_hz_type =
    int16_t;
  _right_hz_type right_hz;
  using _left_hz_type =
    int16_t;
  _left_hz_type left_hz;

  // setters for named parameter idiom
  Type & set__right_hz(
    const int16_t & _arg)
  {
    this->right_hz = _arg;
    return *this;
  }
  Type & set__left_hz(
    const int16_t & _arg)
  {
    this->left_hz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspimouse_msgs__msg__MotorFreqs
    std::shared_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspimouse_msgs__msg__MotorFreqs
    std::shared_ptr<raspimouse_msgs::msg::MotorFreqs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorFreqs_ & other) const
  {
    if (this->right_hz != other.right_hz) {
      return false;
    }
    if (this->left_hz != other.left_hz) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorFreqs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorFreqs_

// alias to use template instance with default allocator
using MotorFreqs =
  raspimouse_msgs::msg::MotorFreqs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__MOTOR_FREQS__STRUCT_HPP_
