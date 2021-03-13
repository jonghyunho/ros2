// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\BatteryState.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include "sensor_msgs/msg/detail/battery_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const sensor_msgs::msg::BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge: ";
    value_to_yaml(msg.charge, out);
    out << "\n";
  }

  // member: capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacity: ";
    value_to_yaml(msg.capacity, out);
    out << "\n";
  }

  // member: design_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "design_capacity: ";
    value_to_yaml(msg.design_capacity, out);
    out << "\n";
  }

  // member: percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage: ";
    value_to_yaml(msg.percentage, out);
    out << "\n";
  }

  // member: power_supply_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_supply_status: ";
    value_to_yaml(msg.power_supply_status, out);
    out << "\n";
  }

  // member: power_supply_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_supply_health: ";
    value_to_yaml(msg.power_supply_health, out);
    out << "\n";
  }

  // member: power_supply_technology
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_supply_technology: ";
    value_to_yaml(msg.power_supply_technology, out);
    out << "\n";
  }

  // member: present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present: ";
    value_to_yaml(msg.present, out);
    out << "\n";
  }

  // member: cell_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cell_voltage.size() == 0) {
      out << "cell_voltage: []\n";
    } else {
      out << "cell_voltage:\n";
      for (auto item : msg.cell_voltage) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cell_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cell_temperature.size() == 0) {
      out << "cell_temperature: []\n";
    } else {
      out << "cell_temperature:\n";
      for (auto item : msg.cell_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    value_to_yaml(msg.serial_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const sensor_msgs::msg::BatteryState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<sensor_msgs::msg::BatteryState>()
{
  return "sensor_msgs::msg::BatteryState";
}

template<>
inline const char * name<sensor_msgs::msg::BatteryState>()
{
  return "sensor_msgs/msg/BatteryState";
}

template<>
struct has_fixed_size<sensor_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensor_msgs::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
