#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Calamares::calamares" for configuration ""
set_property(TARGET Calamares::calamares APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Calamares::calamares PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "kpmcore"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcalamares.so.3.2.26"
  IMPORTED_SONAME_NOCONFIG "libcalamares.so.3.2.26"
  )

list(APPEND _IMPORT_CHECK_TARGETS Calamares::calamares )
list(APPEND _IMPORT_CHECK_FILES_FOR_Calamares::calamares "${_IMPORT_PREFIX}/lib/libcalamares.so.3.2.26" )

# Import target "Calamares::calamaresui" for configuration ""
set_property(TARGET Calamares::calamaresui APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Calamares::calamaresui PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcalamaresui.so.3.2.26"
  IMPORTED_SONAME_NOCONFIG "libcalamaresui.so.3.2.26"
  )

list(APPEND _IMPORT_CHECK_TARGETS Calamares::calamaresui )
list(APPEND _IMPORT_CHECK_FILES_FOR_Calamares::calamaresui "${_IMPORT_PREFIX}/lib/libcalamaresui.so.3.2.26" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
