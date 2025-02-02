// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_msgs:srv\CancelGoal.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__TRAITS_HPP_
#define ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__TRAITS_HPP_

#include "action_msgs/srv/detail/cancel_goal__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'goal_info'
#include "action_msgs/msg/detail/goal_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const action_msgs::srv::CancelGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_info:\n";
    to_yaml(msg.goal_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const action_msgs::srv::CancelGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<action_msgs::srv::CancelGoal_Request>()
{
  return "action_msgs::srv::CancelGoal_Request";
}

template<>
inline const char * name<action_msgs::srv::CancelGoal_Request>()
{
  return "action_msgs/srv/CancelGoal_Request";
}

template<>
struct has_fixed_size<action_msgs::srv::CancelGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_msgs::msg::GoalInfo>::value> {};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_msgs::msg::GoalInfo>::value> {};

template<>
struct is_message<action_msgs::srv::CancelGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goals_canceling'
// already included above
// #include "action_msgs/msg/detail/goal_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const action_msgs::srv::CancelGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: return_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_code: ";
    value_to_yaml(msg.return_code, out);
    out << "\n";
  }

  // member: goals_canceling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goals_canceling.size() == 0) {
      out << "goals_canceling: []\n";
    } else {
      out << "goals_canceling:\n";
      for (auto item : msg.goals_canceling) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const action_msgs::srv::CancelGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<action_msgs::srv::CancelGoal_Response>()
{
  return "action_msgs::srv::CancelGoal_Response";
}

template<>
inline const char * name<action_msgs::srv::CancelGoal_Response>()
{
  return "action_msgs/srv/CancelGoal_Response";
}

template<>
struct has_fixed_size<action_msgs::srv::CancelGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<action_msgs::srv::CancelGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_msgs::srv::CancelGoal>()
{
  return "action_msgs::srv::CancelGoal";
}

template<>
inline const char * name<action_msgs::srv::CancelGoal>()
{
  return "action_msgs/srv/CancelGoal";
}

template<>
struct has_fixed_size<action_msgs::srv::CancelGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_msgs::srv::CancelGoal_Request>::value &&
    has_fixed_size<action_msgs::srv::CancelGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_msgs::srv::CancelGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_msgs::srv::CancelGoal_Request>::value &&
    has_bounded_size<action_msgs::srv::CancelGoal_Response>::value
  >
{
};

template<>
struct is_service<action_msgs::srv::CancelGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_msgs::srv::CancelGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_msgs::srv::CancelGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__TRAITS_HPP_
