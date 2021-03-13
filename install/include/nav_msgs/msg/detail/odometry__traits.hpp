// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_msgs:msg\Odometry.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__ODOMETRY__TRAITS_HPP_
#define NAV_MSGS__MSG__DETAIL__ODOMETRY__TRAITS_HPP_

#include "nav_msgs/msg/detail/odometry__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav_msgs::msg::Odometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav_msgs::msg::Odometry & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav_msgs::msg::Odometry>()
{
  return "nav_msgs::msg::Odometry";
}

template<>
inline const char * name<nav_msgs::msg::Odometry>()
{
  return "nav_msgs/msg/Odometry";
}

template<>
struct has_fixed_size<nav_msgs::msg::Odometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_msgs::msg::Odometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_msgs::msg::Odometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MSGS__MSG__DETAIL__ODOMETRY__TRAITS_HPP_
