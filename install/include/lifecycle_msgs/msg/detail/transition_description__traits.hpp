// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lifecycle_msgs:msg\TransitionDescription.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_DESCRIPTION__TRAITS_HPP_
#define LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_DESCRIPTION__TRAITS_HPP_

#include "lifecycle_msgs/msg/detail/transition_description__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'transition'
#include "lifecycle_msgs/msg/detail/transition__traits.hpp"
// Member 'start_state'
// Member 'goal_state'
#include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lifecycle_msgs::msg::TransitionDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition:\n";
    to_yaml(msg.transition, out, indentation + 2);
  }

  // member: start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_state:\n";
    to_yaml(msg.start_state, out, indentation + 2);
  }

  // member: goal_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_state:\n";
    to_yaml(msg.goal_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lifecycle_msgs::msg::TransitionDescription & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lifecycle_msgs::msg::TransitionDescription>()
{
  return "lifecycle_msgs::msg::TransitionDescription";
}

template<>
inline const char * name<lifecycle_msgs::msg::TransitionDescription>()
{
  return "lifecycle_msgs/msg/TransitionDescription";
}

template<>
struct has_fixed_size<lifecycle_msgs::msg::TransitionDescription>
  : std::integral_constant<bool, has_fixed_size<lifecycle_msgs::msg::State>::value && has_fixed_size<lifecycle_msgs::msg::Transition>::value> {};

template<>
struct has_bounded_size<lifecycle_msgs::msg::TransitionDescription>
  : std::integral_constant<bool, has_bounded_size<lifecycle_msgs::msg::State>::value && has_bounded_size<lifecycle_msgs::msg::Transition>::value> {};

template<>
struct is_message<lifecycle_msgs::msg::TransitionDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_DESCRIPTION__TRAITS_HPP_
