#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "laser_geometry::laser_geometry" for configuration "Release"
set_property(TARGET laser_geometry::laser_geometry APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(laser_geometry::laser_geometry PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/laser_geometry.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/laser_geometry.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS laser_geometry::laser_geometry )
list(APPEND _IMPORT_CHECK_FILES_FOR_laser_geometry::laser_geometry "${_IMPORT_PREFIX}/lib/laser_geometry.lib" "${_IMPORT_PREFIX}/bin/laser_geometry.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
