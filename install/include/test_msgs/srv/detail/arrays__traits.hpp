// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:srv\Arrays.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__ARRAYS__TRAITS_HPP_
#define TEST_MSGS__SRV__DETAIL__ARRAYS__TRAITS_HPP_

#include "test_msgs/srv/detail/arrays__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'basic_types_values'
#include "test_msgs/msg/detail/basic_types__traits.hpp"
// Member 'constants_values'
#include "test_msgs/msg/detail/constants__traits.hpp"
// Member 'defaults_values'
#include "test_msgs/msg/detail/defaults__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::srv::Arrays_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values.size() == 0) {
      out << "bool_values: []\n";
    } else {
      out << "bool_values:\n";
      for (auto item : msg.bool_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: byte_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.byte_values.size() == 0) {
      out << "byte_values: []\n";
    } else {
      out << "byte_values:\n";
      for (auto item : msg.byte_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: char_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.char_values.size() == 0) {
      out << "char_values: []\n";
    } else {
      out << "char_values:\n";
      for (auto item : msg.char_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_values.size() == 0) {
      out << "float32_values: []\n";
    } else {
      out << "float32_values:\n";
      for (auto item : msg.float32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64_values.size() == 0) {
      out << "float64_values: []\n";
    } else {
      out << "float64_values:\n";
      for (auto item : msg.float64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_values.size() == 0) {
      out << "int8_values: []\n";
    } else {
      out << "int8_values:\n";
      for (auto item : msg.int8_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_values.size() == 0) {
      out << "uint8_values: []\n";
    } else {
      out << "uint8_values:\n";
      for (auto item : msg.uint8_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_values.size() == 0) {
      out << "int16_values: []\n";
    } else {
      out << "int16_values:\n";
      for (auto item : msg.int16_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16_values.size() == 0) {
      out << "uint16_values: []\n";
    } else {
      out << "uint16_values:\n";
      for (auto item : msg.uint16_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_values.size() == 0) {
      out << "int32_values: []\n";
    } else {
      out << "int32_values:\n";
      for (auto item : msg.int32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32_values.size() == 0) {
      out << "uint32_values: []\n";
    } else {
      out << "uint32_values:\n";
      for (auto item : msg.uint32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64_values.size() == 0) {
      out << "int64_values: []\n";
    } else {
      out << "int64_values:\n";
      for (auto item : msg.int64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64_values.size() == 0) {
      out << "uint64_values: []\n";
    } else {
      out << "uint64_values:\n";
      for (auto item : msg.uint64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_values.size() == 0) {
      out << "string_values: []\n";
    } else {
      out << "string_values:\n";
      for (auto item : msg.string_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: basic_types_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.basic_types_values.size() == 0) {
      out << "basic_types_values: []\n";
    } else {
      out << "basic_types_values:\n";
      for (auto item : msg.basic_types_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: constants_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constants_values.size() == 0) {
      out << "constants_values: []\n";
    } else {
      out << "constants_values:\n";
      for (auto item : msg.constants_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: defaults_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.defaults_values.size() == 0) {
      out << "defaults_values: []\n";
    } else {
      out << "defaults_values:\n";
      for (auto item : msg.defaults_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bool_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values_default.size() == 0) {
      out << "bool_values_default: []\n";
    } else {
      out << "bool_values_default:\n";
      for (auto item : msg.bool_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: byte_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.byte_values_default.size() == 0) {
      out << "byte_values_default: []\n";
    } else {
      out << "byte_values_default:\n";
      for (auto item : msg.byte_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: char_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.char_values_default.size() == 0) {
      out << "char_values_default: []\n";
    } else {
      out << "char_values_default:\n";
      for (auto item : msg.char_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_values_default.size() == 0) {
      out << "float32_values_default: []\n";
    } else {
      out << "float32_values_default:\n";
      for (auto item : msg.float32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64_values_default.size() == 0) {
      out << "float64_values_default: []\n";
    } else {
      out << "float64_values_default:\n";
      for (auto item : msg.float64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_values_default.size() == 0) {
      out << "int8_values_default: []\n";
    } else {
      out << "int8_values_default:\n";
      for (auto item : msg.int8_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_values_default.size() == 0) {
      out << "uint8_values_default: []\n";
    } else {
      out << "uint8_values_default:\n";
      for (auto item : msg.uint8_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_values_default.size() == 0) {
      out << "int16_values_default: []\n";
    } else {
      out << "int16_values_default:\n";
      for (auto item : msg.int16_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16_values_default.size() == 0) {
      out << "uint16_values_default: []\n";
    } else {
      out << "uint16_values_default:\n";
      for (auto item : msg.uint16_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_values_default.size() == 0) {
      out << "int32_values_default: []\n";
    } else {
      out << "int32_values_default:\n";
      for (auto item : msg.int32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32_values_default.size() == 0) {
      out << "uint32_values_default: []\n";
    } else {
      out << "uint32_values_default:\n";
      for (auto item : msg.uint32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64_values_default.size() == 0) {
      out << "int64_values_default: []\n";
    } else {
      out << "int64_values_default:\n";
      for (auto item : msg.int64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64_values_default.size() == 0) {
      out << "uint64_values_default: []\n";
    } else {
      out << "uint64_values_default:\n";
      for (auto item : msg.uint64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_values_default.size() == 0) {
      out << "string_values_default: []\n";
    } else {
      out << "string_values_default:\n";
      for (auto item : msg.string_values_default) {
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

inline std::string to_yaml(const test_msgs::srv::Arrays_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::srv::Arrays_Request>()
{
  return "test_msgs::srv::Arrays_Request";
}

template<>
inline const char * name<test_msgs::srv::Arrays_Request>()
{
  return "test_msgs/srv/Arrays_Request";
}

template<>
struct has_fixed_size<test_msgs::srv::Arrays_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::srv::Arrays_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::srv::Arrays_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'basic_types_values'
// already included above
// #include "test_msgs/msg/detail/basic_types__traits.hpp"
// Member 'constants_values'
// already included above
// #include "test_msgs/msg/detail/constants__traits.hpp"
// Member 'defaults_values'
// already included above
// #include "test_msgs/msg/detail/defaults__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const test_msgs::srv::Arrays_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values.size() == 0) {
      out << "bool_values: []\n";
    } else {
      out << "bool_values:\n";
      for (auto item : msg.bool_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: byte_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.byte_values.size() == 0) {
      out << "byte_values: []\n";
    } else {
      out << "byte_values:\n";
      for (auto item : msg.byte_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: char_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.char_values.size() == 0) {
      out << "char_values: []\n";
    } else {
      out << "char_values:\n";
      for (auto item : msg.char_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_values.size() == 0) {
      out << "float32_values: []\n";
    } else {
      out << "float32_values:\n";
      for (auto item : msg.float32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64_values.size() == 0) {
      out << "float64_values: []\n";
    } else {
      out << "float64_values:\n";
      for (auto item : msg.float64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_values.size() == 0) {
      out << "int8_values: []\n";
    } else {
      out << "int8_values:\n";
      for (auto item : msg.int8_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_values.size() == 0) {
      out << "uint8_values: []\n";
    } else {
      out << "uint8_values:\n";
      for (auto item : msg.uint8_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_values.size() == 0) {
      out << "int16_values: []\n";
    } else {
      out << "int16_values:\n";
      for (auto item : msg.int16_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16_values.size() == 0) {
      out << "uint16_values: []\n";
    } else {
      out << "uint16_values:\n";
      for (auto item : msg.uint16_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_values.size() == 0) {
      out << "int32_values: []\n";
    } else {
      out << "int32_values:\n";
      for (auto item : msg.int32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32_values.size() == 0) {
      out << "uint32_values: []\n";
    } else {
      out << "uint32_values:\n";
      for (auto item : msg.uint32_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64_values.size() == 0) {
      out << "int64_values: []\n";
    } else {
      out << "int64_values:\n";
      for (auto item : msg.int64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64_values.size() == 0) {
      out << "uint64_values: []\n";
    } else {
      out << "uint64_values:\n";
      for (auto item : msg.uint64_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_values.size() == 0) {
      out << "string_values: []\n";
    } else {
      out << "string_values:\n";
      for (auto item : msg.string_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: basic_types_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.basic_types_values.size() == 0) {
      out << "basic_types_values: []\n";
    } else {
      out << "basic_types_values:\n";
      for (auto item : msg.basic_types_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: constants_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constants_values.size() == 0) {
      out << "constants_values: []\n";
    } else {
      out << "constants_values:\n";
      for (auto item : msg.constants_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: defaults_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.defaults_values.size() == 0) {
      out << "defaults_values: []\n";
    } else {
      out << "defaults_values:\n";
      for (auto item : msg.defaults_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bool_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bool_values_default.size() == 0) {
      out << "bool_values_default: []\n";
    } else {
      out << "bool_values_default:\n";
      for (auto item : msg.bool_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: byte_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.byte_values_default.size() == 0) {
      out << "byte_values_default: []\n";
    } else {
      out << "byte_values_default:\n";
      for (auto item : msg.byte_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: char_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.char_values_default.size() == 0) {
      out << "char_values_default: []\n";
    } else {
      out << "char_values_default:\n";
      for (auto item : msg.char_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float32_values_default.size() == 0) {
      out << "float32_values_default: []\n";
    } else {
      out << "float32_values_default:\n";
      for (auto item : msg.float32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: float64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.float64_values_default.size() == 0) {
      out << "float64_values_default: []\n";
    } else {
      out << "float64_values_default:\n";
      for (auto item : msg.float64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int8_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int8_values_default.size() == 0) {
      out << "int8_values_default: []\n";
    } else {
      out << "int8_values_default:\n";
      for (auto item : msg.int8_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint8_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint8_values_default.size() == 0) {
      out << "uint8_values_default: []\n";
    } else {
      out << "uint8_values_default:\n";
      for (auto item : msg.uint8_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int16_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int16_values_default.size() == 0) {
      out << "int16_values_default: []\n";
    } else {
      out << "int16_values_default:\n";
      for (auto item : msg.int16_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint16_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint16_values_default.size() == 0) {
      out << "uint16_values_default: []\n";
    } else {
      out << "uint16_values_default:\n";
      for (auto item : msg.uint16_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int32_values_default.size() == 0) {
      out << "int32_values_default: []\n";
    } else {
      out << "int32_values_default:\n";
      for (auto item : msg.int32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint32_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint32_values_default.size() == 0) {
      out << "uint32_values_default: []\n";
    } else {
      out << "uint32_values_default:\n";
      for (auto item : msg.uint32_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: int64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int64_values_default.size() == 0) {
      out << "int64_values_default: []\n";
    } else {
      out << "int64_values_default:\n";
      for (auto item : msg.int64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: uint64_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uint64_values_default.size() == 0) {
      out << "uint64_values_default: []\n";
    } else {
      out << "uint64_values_default:\n";
      for (auto item : msg.uint64_values_default) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: string_values_default
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.string_values_default.size() == 0) {
      out << "string_values_default: []\n";
    } else {
      out << "string_values_default:\n";
      for (auto item : msg.string_values_default) {
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

inline std::string to_yaml(const test_msgs::srv::Arrays_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<test_msgs::srv::Arrays_Response>()
{
  return "test_msgs::srv::Arrays_Response";
}

template<>
inline const char * name<test_msgs::srv::Arrays_Response>()
{
  return "test_msgs/srv/Arrays_Response";
}

template<>
struct has_fixed_size<test_msgs::srv::Arrays_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_msgs::srv::Arrays_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_msgs::srv::Arrays_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::srv::Arrays>()
{
  return "test_msgs::srv::Arrays";
}

template<>
inline const char * name<test_msgs::srv::Arrays>()
{
  return "test_msgs/srv/Arrays";
}

template<>
struct has_fixed_size<test_msgs::srv::Arrays>
  : std::integral_constant<
    bool,
    has_fixed_size<test_msgs::srv::Arrays_Request>::value &&
    has_fixed_size<test_msgs::srv::Arrays_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_msgs::srv::Arrays>
  : std::integral_constant<
    bool,
    has_bounded_size<test_msgs::srv::Arrays_Request>::value &&
    has_bounded_size<test_msgs::srv::Arrays_Response>::value
  >
{
};

template<>
struct is_service<test_msgs::srv::Arrays>
  : std::true_type
{
};

template<>
struct is_service_request<test_msgs::srv::Arrays_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_msgs::srv::Arrays_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__SRV__DETAIL__ARRAYS__TRAITS_HPP_
