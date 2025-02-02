find_package(yaml-cpp 0.6 QUIET)

if(NOT yaml-cpp_FOUND)
  # add the local Modules directory to the modules path
  if(WIN32)
    set(yaml-cpp_DIR "${yaml_cpp_vendor_DIR}/../../../opt/yaml_cpp_vendor/CMake")
  else()
    set(yaml-cpp_DIR "${yaml_cpp_vendor_DIR}/../../../opt/yaml_cpp_vendor/lib/cmake/yaml-cpp")
  endif()
  message(STATUS "Setting yaml-cpp_DIR to: '${yaml-cpp_DIR}'")

  find_package(yaml-cpp CONFIG REQUIRED QUIET)
endif()

set(yaml_cpp_vendor_LIBRARIES ${YAML_CPP_LIBRARIES})
set(yaml_cpp_vendor_INCLUDE_DIRS ${YAML_CPP_INCLUDE_DIR})

list(APPEND yaml_cpp_vendor_TARGETS yaml-cpp)
