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
      this->a = 0;
      this->b = 0;
      this->c = 0;
      this->d = 0;
    }
  }

  explicit LightSensorsService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0;
      this->b = 0;
      this->c = 0;
      this->d = 0;
    }
  }

  // field types and members
  using _a_type =
    int16_t;
  _a_type a;
  using _b_type =
    int16_t;
  _b_type b;
  using _c_type =
    int16_t;
  _c_type c;
  using _d_type =
    int16_t;
  _d_type d;

  // setters for named parameter idiom
  Type & set__a(
    const int16_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int16_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int16_t & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__d(
    const int16_t & _arg)
  {
    this->d = _arg;
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
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->d != other.d) {
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
