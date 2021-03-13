// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg\WStrings.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__W_STRINGS__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__W_STRINGS__TRAITS_HPP_

#include "test_msgs/msg/detail/w_strings__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::msg::WStrings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wstring_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wstring_value: ";
    value_to_yaml(msg.wstring_value, out);
    out << "\n";
  }

  // member: wstring_value_default1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wstring_value_default1: ";
    value_to_yaml(msg.wstring_value_default1, out);
    out << "\n";
  }

  // member: wstring_value_default2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wstring_value_default2: ";
    value_to_yaml(msg.wstring_value_default2, out);
    out << "\n";
  }

  // member: wstring_value_default3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wstring_value_default3: ";
    value_to_yaml(msg.wstring_value_default3, out);
    out << "\n";
  }

  // member: array_of_wstrings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array_of_wstrings.size() == 0) {
      out << "array_of_wstrings: []\n";
    } else {
      out << "array_of_wstrings:\n";
      for (auto item : msg.array_of_wstrings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bounded_sequence_of_wstrings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_sequence_of_wstrings.size() == 0) {
      out << "bounded_sequence_of_wstrings: []\n";
    } else {
      out << "bounded_sequence_of_wstrings:\n";
      for (auto item : msg.bounded_sequence_of_wstrings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: unbounded_sequence_of_wstrings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unbounded_sequence_of_wstrings.size() == 0) {
      out << "unbounded_sequence_of_wstrings: []\n";
    } else {
      out << "unbounded_sequence_of_wstrings:\n";
      for (auto item : msg.unbounded_sequence_of_wstrings) {
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

inline std::string to_yaml(const test_msgs::msg::WStrings & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::msg::WStrings>()
{
  return "test_msgs::msg::WStrings";
}

template<>
inline const char * name<test_msgs::msg::WStrings>()
{
  return "test_msgs/msg/WStrings";
}

template<>
struct has_fixed_size<test_msgs::msg::WStrings>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::msg::WStrings>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::msg::WStrings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__W_STRINGS__TRAITS_HPP_
