// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pendulum_msgs:msg\RttestResults.idl
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__TRAITS_HPP_
#define PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__TRAITS_HPP_

#include "pendulum_msgs/msg/detail/rttest_results__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'command'
#include "pendulum_msgs/msg/detail/joint_command__traits.hpp"
// Member 'state'
#include "pendulum_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const pendulum_msgs::msg::RttestResults & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_yaml(msg.command, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_yaml(msg.state, out, indentation + 2);
  }

  // member: cur_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_latency: ";
    value_to_yaml(msg.cur_latency, out);
    out << "\n";
  }

  // member: mean_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_latency: ";
    value_to_yaml(msg.mean_latency, out);
    out << "\n";
  }

  // member: min_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_latency: ";
    value_to_yaml(msg.min_latency, out);
    out << "\n";
  }

  // member: max_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_latency: ";
    value_to_yaml(msg.max_latency, out);
    out << "\n";
  }

  // member: minor_pagefaults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minor_pagefaults: ";
    value_to_yaml(msg.minor_pagefaults, out);
    out << "\n";
  }

  // member: major_pagefaults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "major_pagefaults: ";
    value_to_yaml(msg.major_pagefaults, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const pendulum_msgs::msg::RttestResults & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<pendulum_msgs::msg::RttestResults>()
{
  return "pendulum_msgs::msg::RttestResults";
}

template<>
inline const char * name<pendulum_msgs::msg::RttestResults>()
{
  return "pendulum_msgs/msg/RttestResults";
}

template<>
struct has_fixed_size<pendulum_msgs::msg::RttestResults>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<pendulum_msgs::msg::JointCommand>::value && has_fixed_size<pendulum_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<pendulum_msgs::msg::RttestResults>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<pendulum_msgs::msg::JointCommand>::value && has_bounded_size<pendulum_msgs::msg::JointState>::value> {};

template<>
struct is_message<pendulum_msgs::msg::RttestResults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PENDULUM_MSGS__MSG__DETAIL__RTTEST_RESULTS__TRAITS_HPP_
