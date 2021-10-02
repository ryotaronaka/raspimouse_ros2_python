// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from light_sensor_values:srv/LightSensorValuesServide.idl
// generated code does not contain a copyright notice

#ifndef LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__STRUCT_HPP_
#define LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Request __attribute__((deprecated))
#else
# define DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Request __declspec(deprecated)
#endif

namespace light_sensor_values
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightSensorValuesServide_Request_
{
  using Type = LightSensorValuesServide_Request_<ContainerAllocator>;

  explicit LightSensorValuesServide_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit LightSensorValuesServide_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Request
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Request
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightSensorValuesServide_Request_ & other) const
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
  bool operator!=(const LightSensorValuesServide_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightSensorValuesServide_Request_

// alias to use template instance with default allocator
using LightSensorValuesServide_Request =
  light_sensor_values::srv::LightSensorValuesServide_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace light_sensor_values


#ifndef _WIN32
# define DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Response __attribute__((deprecated))
#else
# define DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Response __declspec(deprecated)
#endif

namespace light_sensor_values
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightSensorValuesServide_Response_
{
  using Type = LightSensorValuesServide_Response_<ContainerAllocator>;

  explicit LightSensorValuesServide_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0;
    }
  }

  explicit LightSensorValuesServide_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Response
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__light_sensor_values__srv__LightSensorValuesServide_Response
    std::shared_ptr<light_sensor_values::srv::LightSensorValuesServide_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightSensorValuesServide_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightSensorValuesServide_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightSensorValuesServide_Response_

// alias to use template instance with default allocator
using LightSensorValuesServide_Response =
  light_sensor_values::srv::LightSensorValuesServide_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace light_sensor_values

namespace light_sensor_values
{

namespace srv
{

struct LightSensorValuesServide
{
  using Request = light_sensor_values::srv::LightSensorValuesServide_Request;
  using Response = light_sensor_values::srv::LightSensorValuesServide_Response;
};

}  // namespace srv

}  // namespace light_sensor_values

#endif  // LIGHT_SENSOR_VALUES__SRV__DETAIL__LIGHT_SENSOR_VALUES_SERVIDE__STRUCT_HPP_
