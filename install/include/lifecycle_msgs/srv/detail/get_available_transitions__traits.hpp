// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lifecycle_msgs:srv\GetAvailableTransitions.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_TRANSITIONS__TRAITS_HPP_
#define LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_TRANSITIONS__TRAITS_HPP_

#include "lifecycle_msgs/srv/detail/get_available_transitions__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lifecycle_msgs::srv::GetAvailableTransitions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lifecycle_msgs::srv::GetAvailableTransitions_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lifecycle_msgs::srv::GetAvailableTransitions_Request>()
{
  return "lifecycle_msgs::srv::GetAvailableTransitions_Request";
}

template<>
inline const char * name<lifecycle_msgs::srv::GetAvailableTransitions_Request>()
{
  return "lifecycle_msgs/srv/GetAvailableTransitions_Request";
}

template<>
struct has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lifecycle_msgs::srv::GetAvailableTransitions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lifecycle_msgs::srv::GetAvailableTransitions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'available_transitions'
#include "lifecycle_msgs/msg/detail/transition_description__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const lifecycle_msgs::srv::GetAvailableTransitions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available_transitions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_transitions.size() == 0) {
      out << "available_transitions: []\n";
    } else {
      out << "available_transitions:\n";
      for (auto item : msg.available_transitions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const lifecycle_msgs::srv::GetAvailableTransitions_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<lifecycle_msgs::srv::GetAvailableTransitions_Response>()
{
  return "lifecycle_msgs::srv::GetAvailableTransitions_Response";
}

template<>
inline const char * name<lifecycle_msgs::srv::GetAvailableTransitions_Response>()
{
  return "lifecycle_msgs/srv/GetAvailableTransitions_Response";
}

template<>
struct has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lifecycle_msgs::srv::GetAvailableTransitions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lifecycle_msgs::srv::GetAvailableTransitions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lifecycle_msgs::srv::GetAvailableTransitions>()
{
  return "lifecycle_msgs::srv::GetAvailableTransitions";
}

template<>
inline const char * name<lifecycle_msgs::srv::GetAvailableTransitions>()
{
  return "lifecycle_msgs/srv/GetAvailableTransitions";
}

template<>
struct has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions>
  : std::integral_constant<
    bool,
    has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions_Request>::value &&
    has_fixed_size<lifecycle_msgs::srv::GetAvailableTransitions_Response>::value
  >
{
};

template<>
struct has_bounded_size<lifecycle_msgs::srv::GetAvailableTransitions>
  : std::integral_constant<
    bool,
    has_bounded_size<lifecycle_msgs::srv::GetAvailableTransitions_Request>::value &&
    has_bounded_size<lifecycle_msgs::srv::GetAvailableTransitions_Response>::value
  >
{
};

template<>
struct is_service<lifecycle_msgs::srv::GetAvailableTransitions>
  : std::true_type
{
};

template<>
struct is_service_request<lifecycle_msgs::srv::GetAvailableTransitions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lifecycle_msgs::srv::GetAvailableTransitions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_TRANSITIONS__TRAITS_HPP_
