// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2cli_test_interfaces:msg\ShortVariedNested.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED_NESTED__BUILDER_HPP_
#define ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED_NESTED__BUILDER_HPP_

#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2cli_test_interfaces
{

namespace msg
{

namespace builder
{

class Init_ShortVariedNested_short_varied
{
public:
  Init_ShortVariedNested_short_varied()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2cli_test_interfaces::msg::ShortVariedNested short_varied(::ros2cli_test_interfaces::msg::ShortVariedNested::_short_varied_type arg)
  {
    msg_.short_varied = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2cli_test_interfaces::msg::ShortVariedNested msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2cli_test_interfaces::msg::ShortVariedNested>()
{
  return ros2cli_test_interfaces::msg::builder::Init_ShortVariedNested_short_varied();
}

}  // namespace ros2cli_test_interfaces

#endif  // ROS2CLI_TEST_INTERFACES__MSG__DETAIL__SHORT_VARIED_NESTED__BUILDER_HPP_
