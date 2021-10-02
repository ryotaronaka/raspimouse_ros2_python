// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raspimouse_msgs:msg/LightSensors.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__STRUCT_HPP_
#define RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__raspimouse_msgs__msg__LightSensors __attribute__((deprecated))
#else
# define DEPRECATED__raspimouse_msgs__msg__LightSensors __declspec(deprecated)
#endif

namespace raspimouse_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightSensors_
{
  using Type = LightSensors_<ContainerAllocator>;

  explicit LightSensors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_forward = 0;
      this->right_side = 0;
      this->left_side = 0;
      this->left_forward = 0;
      this->sum_all = 0;
      this->sum_forward = 0;
    }
  }

  explicit LightSensors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_forward = 0;
      this->right_side = 0;
      this->left_side = 0;
      this->left_forward = 0;
      this->sum_all = 0;
      this->sum_forward = 0;
    }
  }

  // field types and members
  using _right_forward_type =
    int16_t;
  _right_forward_type right_forward;
  using _right_side_type =
    int16_t;
  _right_side_type right_side;
  using _left_side_type =
    int16_t;
  _left_side_type left_side;
  using _left_forward_type =
    int16_t;
  _left_forward_type left_forward;
  using _sum_all_type =
    int16_t;
  _sum_all_type sum_all;
  using _sum_forward_type =
    int16_t;
  _sum_forward_type sum_forward;

  // setters for named parameter idiom
  Type & set__right_forward(
    const int16_t & _arg)
  {
    this->right_forward = _arg;
    return *this;
  }
  Type & set__right_side(
    const int16_t & _arg)
  {
    this->right_side = _arg;
    return *this;
  }
  Type & set__left_side(
    const int16_t & _arg)
  {
    this->left_side = _arg;
    return *this;
  }
  Type & set__left_forward(
    const int16_t & _arg)
  {
    this->left_forward = _arg;
    return *this;
  }
  Type & set__sum_all(
    const int16_t & _arg)
  {
    this->sum_all = _arg;
    return *this;
  }
  Type & set__sum_forward(
    const int16_t & _arg)
  {
    this->sum_forward = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raspimouse_msgs::msg::LightSensors_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspimouse_msgs::msg::LightSensors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::msg::LightSensors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::msg::LightSensors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspimouse_msgs__msg__LightSensors
    std::shared_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspimouse_msgs__msg__LightSensors
    std::shared_ptr<raspimouse_msgs::msg::LightSensors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightSensors_ & other) const
  {
    if (this->right_forward != other.right_forward) {
      return false;
    }
    if (this->right_side != other.right_side) {
      return false;
    }
    if (this->left_side != other.left_side) {
      return false;
    }
    if (this->left_forward != other.left_forward) {
      return false;
    }
    if (this->sum_all != other.sum_all) {
      return false;
    }
    if (this->sum_forward != other.sum_forward) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightSensors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightSensors_

// alias to use template instance with default allocator
using LightSensors =
  raspimouse_msgs::msg::LightSensors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__MSG__DETAIL__LIGHT_SENSORS__STRUCT_HPP_
