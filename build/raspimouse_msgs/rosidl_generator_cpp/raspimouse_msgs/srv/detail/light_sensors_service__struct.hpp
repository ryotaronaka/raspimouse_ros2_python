// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raspimouse_msgs:srv/LightSensorsService.idl
// generated code does not contain a copyright notice

#ifndef RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__STRUCT_HPP_
#define RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Request __attribute__((deprecated))
#else
# define DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Request __declspec(deprecated)
#endif

namespace raspimouse_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightSensorsService_Request_
{
  using Type = LightSensorsService_Request_<ContainerAllocator>;

  explicit LightSensorsService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_forward = 0;
      this->right_side = 0;
      this->left_side = 0;
      this->left_forward = 0;
    }
  }

  explicit LightSensorsService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_forward = 0;
      this->right_side = 0;
      this->left_side = 0;
      this->left_forward = 0;
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

  // constant declarations

  // pointer types
  using RawPtr =
    raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Request
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Request
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightSensorsService_Request_ & other) const
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
    return true;
  }
  bool operator!=(const LightSensorsService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightSensorsService_Request_

// alias to use template instance with default allocator
using LightSensorsService_Request =
  raspimouse_msgs::srv::LightSensorsService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace raspimouse_msgs


#ifndef _WIN32
# define DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Response __attribute__((deprecated))
#else
# define DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Response __declspec(deprecated)
#endif

namespace raspimouse_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightSensorsService_Response_
{
  using Type = LightSensorsService_Response_<ContainerAllocator>;

  explicit LightSensorsService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0;
    }
  }

  explicit LightSensorsService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Response
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspimouse_msgs__srv__LightSensorsService_Response
    std::shared_ptr<raspimouse_msgs::srv::LightSensorsService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightSensorsService_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightSensorsService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightSensorsService_Response_

// alias to use template instance with default allocator
using LightSensorsService_Response =
  raspimouse_msgs::srv::LightSensorsService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace raspimouse_msgs

namespace raspimouse_msgs
{

namespace srv
{

struct LightSensorsService
{
  using Request = raspimouse_msgs::srv::LightSensorsService_Request;
  using Response = raspimouse_msgs::srv::LightSensorsService_Response;
};

}  // namespace srv

}  // namespace raspimouse_msgs

#endif  // RASPIMOUSE_MSGS__SRV__DETAIL__LIGHT_SENSORS_SERVICE__STRUCT_HPP_
