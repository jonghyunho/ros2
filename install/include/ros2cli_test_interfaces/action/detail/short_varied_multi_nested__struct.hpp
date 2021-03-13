// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2cli_test_interfaces:action\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__STRUCT_HPP_
#define ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'short_varied_nested'
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Goal __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_Goal_
{
  using Type = ShortVariedMultiNested_Goal_<ContainerAllocator>;

  explicit ShortVariedMultiNested_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : short_varied_nested(_init)
  {
    (void)_init;
  }

  explicit ShortVariedMultiNested_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : short_varied_nested(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _short_varied_nested_type =
    ros2cli_test_interfaces::msg::ShortVariedNested_<ContainerAllocator>;
  _short_varied_nested_type short_varied_nested;

  // setters for named parameter idiom
  Type & set__short_varied_nested(
    const ros2cli_test_interfaces::msg::ShortVariedNested_<ContainerAllocator> & _arg)
  {
    this->short_varied_nested = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Goal
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Goal
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_Goal_ & other) const
  {
    if (this->short_varied_nested != other.short_varied_nested) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_Goal_

// alias to use template instance with default allocator
using ShortVariedMultiNested_Goal =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces


#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Result __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Result __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_Result_
{
  using Type = ShortVariedMultiNested_Result_<ContainerAllocator>;

  explicit ShortVariedMultiNested_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_value = false;
    }
  }

  explicit ShortVariedMultiNested_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_value = false;
    }
  }

  // field types and members
  using _bool_value_type =
    bool;
  _bool_value_type bool_value;

  // setters for named parameter idiom
  Type & set__bool_value(
    const bool & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Result
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Result
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_Result_ & other) const
  {
    if (this->bool_value != other.bool_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_Result_

// alias to use template instance with default allocator
using ShortVariedMultiNested_Result =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces


#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Feedback __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_Feedback_
{
  using Type = ShortVariedMultiNested_Feedback_<ContainerAllocator>;

  explicit ShortVariedMultiNested_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->bool_values.begin(), this->bool_values.end(), false);
    }
  }

  explicit ShortVariedMultiNested_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bool_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->bool_values.begin(), this->bool_values.end(), false);
    }
  }

  // field types and members
  using _bool_values_type =
    std::array<bool, 3>;
  _bool_values_type bool_values;

  // setters for named parameter idiom
  Type & set__bool_values(
    const std::array<bool, 3> & _arg)
  {
    this->bool_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Feedback
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_Feedback
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_Feedback_ & other) const
  {
    if (this->bool_values != other.bool_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_Feedback_

// alias to use template instance with default allocator
using ShortVariedMultiNested_Feedback =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Request __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_SendGoal_Request_
{
  using Type = ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>;

  explicit ShortVariedMultiNested_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ShortVariedMultiNested_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Request
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Request
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_SendGoal_Request_

// alias to use template instance with default allocator
using ShortVariedMultiNested_SendGoal_Request =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Response __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_SendGoal_Response_
{
  using Type = ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>;

  explicit ShortVariedMultiNested_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ShortVariedMultiNested_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Response
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_SendGoal_Response
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_SendGoal_Response_

// alias to use template instance with default allocator
using ShortVariedMultiNested_SendGoal_Response =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces

namespace ros2cli_test_interfaces
{

namespace action
{

struct ShortVariedMultiNested_SendGoal
{
  using Request = ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request;
  using Response = ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response;
};

}  // namespace action

}  // namespace ros2cli_test_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Request __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_GetResult_Request_
{
  using Type = ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>;

  explicit ShortVariedMultiNested_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ShortVariedMultiNested_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Request
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Request
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_GetResult_Request_

// alias to use template instance with default allocator
using ShortVariedMultiNested_GetResult_Request =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Response __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_GetResult_Response_
{
  using Type = ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>;

  explicit ShortVariedMultiNested_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ShortVariedMultiNested_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Response
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_GetResult_Response
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_GetResult_Response_

// alias to use template instance with default allocator
using ShortVariedMultiNested_GetResult_Response =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces

namespace ros2cli_test_interfaces
{

namespace action
{

struct ShortVariedMultiNested_GetResult
{
  using Request = ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request;
  using Response = ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response;
};

}  // namespace action

}  // namespace ros2cli_test_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_FeedbackMessage __declspec(deprecated)
#endif

namespace ros2cli_test_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ShortVariedMultiNested_FeedbackMessage_
{
  using Type = ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>;

  explicit ShortVariedMultiNested_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ShortVariedMultiNested_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_FeedbackMessage
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2cli_test_interfaces__action__ShortVariedMultiNested_FeedbackMessage
    std::shared_ptr<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShortVariedMultiNested_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShortVariedMultiNested_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShortVariedMultiNested_FeedbackMessage_

// alias to use template instance with default allocator
using ShortVariedMultiNested_FeedbackMessage =
  ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2cli_test_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ros2cli_test_interfaces
{

namespace action
{

struct ShortVariedMultiNested
{
  /// The goal message defined in the action definition.
  using Goal = ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal;
  /// The result message defined in the action definition.
  using Result = ros2cli_test_interfaces::action::ShortVariedMultiNested_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ShortVariedMultiNested ShortVariedMultiNested;

}  // namespace action

}  // namespace ros2cli_test_interfaces

#endif  // ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__STRUCT_HPP_
