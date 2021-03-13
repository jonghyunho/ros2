// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg\GoalStatusArray.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_

#include "actionlib_msgs/msg/detail/goal_status_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status_list'
#include "actionlib_msgs/msg/detail/goal_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const actionlib_msgs::msg::GoalStatusArray & msg,
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

  // member: status_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_list.size() == 0) {
      out << "status_list: []\n";
    } else {
      out << "status_list:\n";
      for (auto item : msg.status_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const actionlib_msgs::msg::GoalStatusArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<actionlib_msgs::msg::GoalStatusArray>()
{
  return "actionlib_msgs::msg::GoalStatusArray";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalStatusArray>()
{
  return "actionlib_msgs/msg/GoalStatusArray";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS_ARRAY__TRAITS_HPP_
