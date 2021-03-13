// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unique_identifier_msgs:msg\UUID.idl
// generated code does not contain a copyright notice

#ifndef UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__TRAITS_HPP_
#define UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__TRAITS_HPP_

#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const unique_identifier_msgs::msg::UUID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uuid.size() == 0) {
      out << "uuid: []\n";
    } else {
      out << "uuid:\n";
      for (auto item : msg.uuid) {
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

inline std::string to_yaml(const unique_identifier_msgs::msg::UUID & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<unique_identifier_msgs::msg::UUID>()
{
  return "unique_identifier_msgs::msg::UUID";
}

template<>
inline const char * name<unique_identifier_msgs::msg::UUID>()
{
  return "unique_identifier_msgs/msg/UUID";
}

template<>
struct has_fixed_size<unique_identifier_msgs::msg::UUID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unique_identifier_msgs::msg::UUID>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unique_identifier_msgs::msg::UUID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNIQUE_IDENTIFIER_MSGS__MSG__DETAIL__UUID__TRAITS_HPP_
