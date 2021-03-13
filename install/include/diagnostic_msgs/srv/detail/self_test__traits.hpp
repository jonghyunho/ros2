// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from diagnostic_msgs:srv\SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_

#include "diagnostic_msgs/srv/detail/self_test__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const diagnostic_msgs::srv::SelfTest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const diagnostic_msgs::srv::SelfTest_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<diagnostic_msgs::srv::SelfTest_Request>()
{
  return "diagnostic_msgs::srv::SelfTest_Request";
}

template<>
inline const char * name<diagnostic_msgs::srv::SelfTest_Request>()
{
  return "diagnostic_msgs/srv/SelfTest_Request";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::SelfTest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<diagnostic_msgs::srv::SelfTest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const diagnostic_msgs::srv::SelfTest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passed: ";
    character_value_to_yaml(msg.passed, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status.size() == 0) {
      out << "status: []\n";
    } else {
      out << "status:\n";
      for (auto item : msg.status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const diagnostic_msgs::srv::SelfTest_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<diagnostic_msgs::srv::SelfTest_Response>()
{
  return "diagnostic_msgs::srv::SelfTest_Response";
}

template<>
inline const char * name<diagnostic_msgs::srv::SelfTest_Response>()
{
  return "diagnostic_msgs/srv/SelfTest_Response";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<diagnostic_msgs::srv::SelfTest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<diagnostic_msgs::srv::SelfTest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<diagnostic_msgs::srv::SelfTest>()
{
  return "diagnostic_msgs::srv::SelfTest";
}

template<>
inline const char * name<diagnostic_msgs::srv::SelfTest>()
{
  return "diagnostic_msgs/srv/SelfTest";
}

template<>
struct has_fixed_size<diagnostic_msgs::srv::SelfTest>
  : std::integral_constant<
    bool,
    has_fixed_size<diagnostic_msgs::srv::SelfTest_Request>::value &&
    has_fixed_size<diagnostic_msgs::srv::SelfTest_Response>::value
  >
{
};

template<>
struct has_bounded_size<diagnostic_msgs::srv::SelfTest>
  : std::integral_constant<
    bool,
    has_bounded_size<diagnostic_msgs::srv::SelfTest_Request>::value &&
    has_bounded_size<diagnostic_msgs::srv::SelfTest_Response>::value
  >
{
};

template<>
struct is_service<diagnostic_msgs::srv::SelfTest>
  : std::true_type
{
};

template<>
struct is_service_request<diagnostic_msgs::srv::SelfTest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<diagnostic_msgs::srv::SelfTest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__TRAITS_HPP_
