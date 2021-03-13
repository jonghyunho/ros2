// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg\GoalStatus.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_

#include "actionlib_msgs/msg/detail/goal_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'goal_id'
#include "actionlib_msgs/msg/detail/goal_id__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const actionlib_msgs::msg::GoalStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const actionlib_msgs::msg::GoalStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<actionlib_msgs::msg::GoalStatus>()
{
  return "actionlib_msgs::msg::GoalStatus";
}

template<>
inline const char * name<actionlib_msgs::msg::GoalStatus>()
{
  return "actionlib_msgs/msg/GoalStatus";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__DETAIL__GOAL_STATUS__TRAITS_HPP_
