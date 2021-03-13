// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from statistics_msgs:msg\StatisticDataType.idl
// generated code does not contain a copyright notice

#ifndef STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_TYPE__TRAITS_HPP_
#define STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_TYPE__TRAITS_HPP_

#include "statistics_msgs/msg/detail/statistic_data_type__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const statistics_msgs::msg::StatisticDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const statistics_msgs::msg::StatisticDataType & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<statistics_msgs::msg::StatisticDataType>()
{
  return "statistics_msgs::msg::StatisticDataType";
}

template<>
inline const char * name<statistics_msgs::msg::StatisticDataType>()
{
  return "statistics_msgs/msg/StatisticDataType";
}

template<>
struct has_fixed_size<statistics_msgs::msg::StatisticDataType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<statistics_msgs::msg::StatisticDataType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<statistics_msgs::msg::StatisticDataType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STATISTICS_MSGS__MSG__DETAIL__STATISTIC_DATA_TYPE__TRAITS_HPP_
