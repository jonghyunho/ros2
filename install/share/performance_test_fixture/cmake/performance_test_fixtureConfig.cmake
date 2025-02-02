# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_performance_test_fixture_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED performance_test_fixture_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(performance_test_fixture_FOUND FALSE)
  elseif(NOT performance_test_fixture_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(performance_test_fixture_FOUND FALSE)
  endif()
  return()
endif()
set(_performance_test_fixture_CONFIG_INCLUDED TRUE)

# output package information
if(NOT performance_test_fixture_FIND_QUIETLY)
  message(STATUS "Found performance_test_fixture: 0.0.6 (${performance_test_fixture_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'performance_test_fixture' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${performance_test_fixture_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(performance_test_fixture_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;performance_test_fixture-extras.cmake")
foreach(_extra ${_extras})
  include("${performance_test_fixture_DIR}/${_extra}")
endforeach()
