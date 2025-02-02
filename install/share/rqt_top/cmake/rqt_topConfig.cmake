# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rqt_top_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rqt_top_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rqt_top_FOUND FALSE)
  elseif(NOT rqt_top_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rqt_top_FOUND FALSE)
  endif()
  return()
endif()
set(_rqt_top_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rqt_top_FIND_QUIETLY)
  message(STATUS "Found rqt_top: 1.0.0 (${rqt_top_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rqt_top' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rqt_top_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rqt_top_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rqt_top_DIR}/${_extra}")
endforeach()
