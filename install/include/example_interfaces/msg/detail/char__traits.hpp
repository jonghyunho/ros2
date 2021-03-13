// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:msg\Char.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__MSG__DETAIL__CHAR__TRAITS_HPP_
#define EXAMPLE_INTERFACES__MSG__DETAIL__CHAR__TRAITS_HPP_

#include "example_interfaces/msg/detail/char__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const example_interfaces::msg::Char & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const example_interfaces::msg::Char & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<example_interfaces::msg::Char>()
{
  return "example_interfaces::msg::Char";
}

template<>
inline const char * name<example_interfaces::msg::Char>()
{
  return "example_interfaces/msg/Char";
}

template<>
struct has_fixed_size<example_interfaces::msg::Char>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::msg::Char>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::msg::Char>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__MSG__DETAIL__CHAR__TRAITS_HPP_
