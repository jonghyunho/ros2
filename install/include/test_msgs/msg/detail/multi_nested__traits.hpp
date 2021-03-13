// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg\MultiNested.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DETAIL__MULTI_NESTED__TRAITS_HPP_
#define TEST_MSGS__MSG__DETAIL__MULTI_NESTED__TRAITS_HPP_

#include "test_msgs/msg/detail/multi_nested__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'array_of_arrays'
// Member 'bounded_sequence_of_arrays'
// Member 'unbounded_sequence_of_arrays'
#include "test_msgs/msg/detail/arrays__traits.hpp"
// Member 'array_of_bounded_sequences'
// Member 'bounded_sequence_of_bounded_sequences'
// Member 'unbounded_sequence_of_bounded_sequences'
#include "test_msgs/msg/detail/bounded_sequences__traits.hpp"
// Member 'array_of_unbounded_sequences'
// Member 'bounded_sequence_of_unbounded_sequences'
// Member 'unbounded_sequence_of_unbounded_sequences'
#include "test_msgs/msg/detail/unbounded_sequences__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::msg::MultiNested & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: array_of_arrays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array_of_arrays.size() == 0) {
      out << "array_of_arrays: []\n";
    } else {
      out << "array_of_arrays:\n";
      for (auto item : msg.array_of_arrays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: array_of_bounded_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array_of_bounded_sequences.size() == 0) {
      out << "array_of_bounded_sequences: []\n";
    } else {
      out << "array_of_bounded_sequences:\n";
      for (auto item : msg.array_of_bounded_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: array_of_unbounded_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.array_of_unbounded_sequences.size() == 0) {
      out << "array_of_unbounded_sequences: []\n";
    } else {
      out << "array_of_unbounded_sequences:\n";
      for (auto item : msg.array_of_unbounded_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bounded_sequence_of_arrays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_sequence_of_arrays.size() == 0) {
      out << "bounded_sequence_of_arrays: []\n";
    } else {
      out << "bounded_sequence_of_arrays:\n";
      for (auto item : msg.bounded_sequence_of_arrays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bounded_sequence_of_bounded_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_sequence_of_bounded_sequences.size() == 0) {
      out << "bounded_sequence_of_bounded_sequences: []\n";
    } else {
      out << "bounded_sequence_of_bounded_sequences:\n";
      for (auto item : msg.bounded_sequence_of_bounded_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bounded_sequence_of_unbounded_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounded_sequence_of_unbounded_sequences.size() == 0) {
      out << "bounded_sequence_of_unbounded_sequences: []\n";
    } else {
      out << "bounded_sequence_of_unbounded_sequences:\n";
      for (auto item : msg.bounded_sequence_of_unbounded_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unbounded_sequence_of_arrays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unbounded_sequence_of_arrays.size() == 0) {
      out << "unbounded_sequence_of_arrays: []\n";
    } else {
      out << "unbounded_sequence_of_arrays:\n";
      for (auto item : msg.unbounded_sequence_of_arrays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unbounded_sequence_of_bounded_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unbounded_sequence_of_bounded_sequences.size() == 0) {
      out << "unbounded_sequence_of_bounded_sequences: []\n";
    } else {
      out << "unbounded_sequence_of_bounded_sequences:\n";
      for (auto item : msg.unbounded_sequence_of_bounded_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unbounded_sequence_of_unbounded_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unbounded_sequence_of_unbounded_sequences.size() == 0) {
      out << "unbounded_sequence_of_unbounded_sequences: []\n";
    } else {
      out << "unbounded_sequence_of_unbounded_sequences:\n";
      for (auto item : msg.unbounded_sequence_of_unbounded_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const test_msgs::msg::MultiNested & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::msg::MultiNested>()
{
  return "test_msgs::msg::MultiNested";
}

template<>
inline const char * name<test_msgs::msg::MultiNested>()
{
  return "test_msgs/msg/MultiNested";
}

template<>
struct has_fixed_size<test_msgs::msg::MultiNested>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::msg::MultiNested>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::msg::MultiNested>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__DETAIL__MULTI_NESTED__TRAITS_HPP_
