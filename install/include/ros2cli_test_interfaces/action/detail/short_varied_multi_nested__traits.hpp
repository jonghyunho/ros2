// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2cli_test_interfaces:action\ShortVariedMultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__TRAITS_HPP_
#define ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__TRAITS_HPP_

#include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'short_varied_nested'
#include "ros2cli_test_interfaces/msg/detail/short_varied_nested__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: short_varied_nested
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "short_varied_nested:\n";
    to_yaml(msg.short_varied_nested, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_Goal";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>
  : std::integral_constant<bool, has_fixed_size<ros2cli_test_interfaces::msg::ShortVariedNested>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>
  : std::integral_constant<bool, has_bounded_size<ros2cli_test_interfaces::msg::ShortVariedNested>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_value: ";
    value_to_yaml(msg.bool_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_Result";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_Result";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values.size() == 0) {
      out << "bool_values: []\n";
    } else {
      out << "bool_values:\n";
      for (auto item : msg.bool_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_Feedback";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request & msg,
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

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_SendGoal_Request";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
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

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_SendGoal_Response";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_SendGoal";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>::value &&
    has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>::value &&
    has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2cli_test_interfaces::action::ShortVariedMultiNested_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_GetResult_Request";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_GetResult_Response";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_GetResult";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>::value &&
    has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>::value &&
    has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2cli_test_interfaces::action::ShortVariedMultiNested_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros2cli_test_interfaces/action/detail/short_varied_multi_nested__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage & msg,
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

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage>()
{
  return "ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage";
}

template<>
inline const char * name<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage>()
{
  return "ros2cli_test_interfaces/action/ShortVariedMultiNested_FeedbackMessage";
}

template<>
struct has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2cli_test_interfaces::action::ShortVariedMultiNested_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros2cli_test_interfaces::action::ShortVariedMultiNested>
  : std::true_type
{
};

template<>
struct is_action_goal<ros2cli_test_interfaces::action::ShortVariedMultiNested_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros2cli_test_interfaces::action::ShortVariedMultiNested_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros2cli_test_interfaces::action::ShortVariedMultiNested_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS2CLI_TEST_INTERFACES__ACTION__DETAIL__SHORT_VARIED_MULTI_NESTED__TRAITS_HPP_
