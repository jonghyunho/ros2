// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:msg\ByteMultiArray.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__TRAITS_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__TRAITS_HPP_

#include "example_interfaces/msg/detail/byte_multi_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'layout'
#include "example_interfaces/msg/detail/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const example_interfaces::msg::ByteMultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout:\n";
    to_yaml(msg.layout, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const example_interfaces::msg::ByteMultiArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<example_interfaces::msg::ByteMultiArray>()
{
  return "example_interfaces::msg::ByteMultiArray";
}

template<>
inline const char * name<example_interfaces::msg::ByteMultiArray>()
{
  return "example_interfaces/msg/ByteMultiArray";
}

template<>
struct has_fixed_size<example_interfaces::msg::ByteMultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::msg::ByteMultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::msg::ByteMultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__BYTE_MULTI_ARRAY__TRAITS_HPP_
