// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:srv\BasicTypes.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__BASIC_TYPES__TRAITS_HPP_
#define TEST_MSGS__SRV__DETAIL__BASIC_TYPES__TRAITS_HPP_

#include "test_msgs/srv/detail/basic_types__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::srv::BasicTypes_Request & msg,
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

  // member: byte_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "byte_value: ";
    character_value_to_yaml(msg.byte_value, out);
    out << "\n";
  }

  // member: char_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "char_value: ";
    value_to_yaml(msg.char_value, out);
    out << "\n";
  }

  // member: float32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float32_value: ";
    value_to_yaml(msg.float32_value, out);
    out << "\n";
  }

  // member: float64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float64_value: ";
    value_to_yaml(msg.float64_value, out);
    out << "\n";
  }

  // member: int8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int8_value: ";
    value_to_yaml(msg.int8_value, out);
    out << "\n";
  }

  // member: uint8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint8_value: ";
    value_to_yaml(msg.uint8_value, out);
    out << "\n";
  }

  // member: int16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int16_value: ";
    value_to_yaml(msg.int16_value, out);
    out << "\n";
  }

  // member: uint16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint16_value: ";
    value_to_yaml(msg.uint16_value, out);
    out << "\n";
  }

  // member: int32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int32_value: ";
    value_to_yaml(msg.int32_value, out);
    out << "\n";
  }

  // member: uint32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint32_value: ";
    value_to_yaml(msg.uint32_value, out);
    out << "\n";
  }

  // member: int64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int64_value: ";
    value_to_yaml(msg.int64_value, out);
    out << "\n";
  }

  // member: uint64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint64_value: ";
    value_to_yaml(msg.uint64_value, out);
    out << "\n";
  }

  // member: string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value: ";
    value_to_yaml(msg.string_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test_msgs::srv::BasicTypes_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::srv::BasicTypes_Request>()
{
  return "test_msgs::srv::BasicTypes_Request";
}

template<>
inline const char * name<test_msgs::srv::BasicTypes_Request>()
{
  return "test_msgs/srv/BasicTypes_Request";
}

template<>
struct has_fixed_size<test_msgs::srv::BasicTypes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::srv::BasicTypes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::srv::BasicTypes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::srv::BasicTypes_Response & msg,
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

  // member: byte_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "byte_value: ";
    character_value_to_yaml(msg.byte_value, out);
    out << "\n";
  }

  // member: char_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "char_value: ";
    value_to_yaml(msg.char_value, out);
    out << "\n";
  }

  // member: float32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float32_value: ";
    value_to_yaml(msg.float32_value, out);
    out << "\n";
  }

  // member: float64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float64_value: ";
    value_to_yaml(msg.float64_value, out);
    out << "\n";
  }

  // member: int8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int8_value: ";
    value_to_yaml(msg.int8_value, out);
    out << "\n";
  }

  // member: uint8_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint8_value: ";
    value_to_yaml(msg.uint8_value, out);
    out << "\n";
  }

  // member: int16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int16_value: ";
    value_to_yaml(msg.int16_value, out);
    out << "\n";
  }

  // member: uint16_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint16_value: ";
    value_to_yaml(msg.uint16_value, out);
    out << "\n";
  }

  // member: int32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int32_value: ";
    value_to_yaml(msg.int32_value, out);
    out << "\n";
  }

  // member: uint32_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint32_value: ";
    value_to_yaml(msg.uint32_value, out);
    out << "\n";
  }

  // member: int64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "int64_value: ";
    value_to_yaml(msg.int64_value, out);
    out << "\n";
  }

  // member: uint64_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint64_value: ";
    value_to_yaml(msg.uint64_value, out);
    out << "\n";
  }

  // member: string_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string_value: ";
    value_to_yaml(msg.string_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test_msgs::srv::BasicTypes_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::srv::BasicTypes_Response>()
{
  return "test_msgs::srv::BasicTypes_Response";
}

template<>
inline const char * name<test_msgs::srv::BasicTypes_Response>()
{
  return "test_msgs/srv/BasicTypes_Response";
}

template<>
struct has_fixed_size<test_msgs::srv::BasicTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::srv::BasicTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::srv::BasicTypes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::srv::BasicTypes>()
{
  return "test_msgs::srv::BasicTypes";
}

template<>
inline const char * name<test_msgs::srv::BasicTypes>()
{
  return "test_msgs/srv/BasicTypes";
}

template<>
struct has_fixed_size<test_msgs::srv::BasicTypes>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::srv::BasicTypes_Request>::value &&
    has_fixed_size<test_msgs::srv::BasicTypes_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::srv::BasicTypes>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::srv::BasicTypes_Request>::value &&
    has_bounded_size<test_msgs::srv::BasicTypes_Response>::value
  >
{
};

template<>
struct is_service<test_msgs::srv::BasicTypes>
  : std::true_type
{
};

template<>
struct is_service_request<test_msgs::srv::BasicTypes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_msgs::srv::BasicTypes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__SRV__DETAIL__BASIC_TYPES__TRAITS_HPP_
