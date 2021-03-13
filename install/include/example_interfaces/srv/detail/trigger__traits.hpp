// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:srv\Trigger.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__TRAITS_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__TRAITS_HPP_

#include "example_interfaces/srv/detail/trigger__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const example_interfaces::srv::Trigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const example_interfaces::srv::Trigger_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<example_interfaces::srv::Trigger_Request>()
{
  return "example_interfaces::srv::Trigger_Request";
}

template<>
inline const char * name<example_interfaces::srv::Trigger_Request>()
{
  return "example_interfaces/srv/Trigger_Request";
}

template<>
struct has_fixed_size<example_interfaces::srv::Trigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::srv::Trigger_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::srv::Trigger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const example_interfaces::srv::Trigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const example_interfaces::srv::Trigger_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<example_interfaces::srv::Trigger_Response>()
{
  return "example_interfaces::srv::Trigger_Response";
}

template<>
inline const char * name<example_interfaces::srv::Trigger_Response>()
{
  return "example_interfaces/srv/Trigger_Response";
}

template<>
struct has_fixed_size<example_interfaces::srv::Trigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::srv::Trigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::srv::Trigger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::Trigger>()
{
  return "example_interfaces::srv::Trigger";
}

template<>
inline const char * name<example_interfaces::srv::Trigger>()
{
  return "example_interfaces/srv/Trigger";
}

template<>
struct has_fixed_size<example_interfaces::srv::Trigger>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::srv::Trigger_Request>::value &&
    has_fixed_size<example_interfaces::srv::Trigger_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::srv::Trigger>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::srv::Trigger_Request>::value &&
    has_bounded_size<example_interfaces::srv::Trigger_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::srv::Trigger>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::srv::Trigger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::srv::Trigger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__TRAITS_HPP_
