// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_msgs:msg\GoalInfo.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__MSG__DETAIL__GOAL_INFO__TRAITS_HPP_
#define ACTION_MSGS__MSG__DETAIL__GOAL_INFO__TRAITS_HPP_

#include "action_msgs/msg/detail/goal_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const action_msgs::msg::GoalInfo & msg,
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

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const action_msgs::msg::GoalInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<action_msgs::msg::GoalInfo>()
{
  return "action_msgs::msg::GoalInfo";
}

template<>
inline const char * name<action_msgs::msg::GoalInfo>()
{
  return "action_msgs/msg/GoalInfo";
}

template<>
struct has_fixed_size<action_msgs::msg::GoalInfo>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_msgs::msg::GoalInfo>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_msgs::msg::GoalInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTION_MSGS__MSG__DETAIL__GOAL_INFO__TRAITS_HPP_
