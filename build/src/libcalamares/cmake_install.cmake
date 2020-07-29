# Install script for directory: /home/camilo/Coding/c++/calamares-qml/src/libcalamares

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/camilo/Coding/c++/calamares-qml/build/libcalamares.so.3.2.26")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26"
         OLD_RPATH "/usr/lib/libpython3.8.so:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.2.26")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/camilo/Coding/c++/calamares-qml/build/libcalamares.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so"
         OLD_RPATH "/usr/lib/libpython3.8.so:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file( MAKE_DIRECTORY "$ENV{DESTDIR}//usr/lib/calamares" )
    execute_process( COMMAND "/usr/bin/cmake" -E create_symlink ../libcalamares.so.3.2.26 libcalamares.so WORKING_DIRECTORY "$ENV{DESTDIR}//usr/lib/calamares" )

endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/CalamaresConfig.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/CppJob.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/DllMacro.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/GlobalStorage.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/Job.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/JobExample.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/JobQueue.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/ProcessJob.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/PythonHelper.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/PythonJob.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/PythonJobApi.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/Settings.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/geoip" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPFixed.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPJSON.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPTests.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPXML.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/Handler.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/Interface.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/locale" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/locale/Label.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/locale/LabelModel.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/locale/Lookup.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/locale/Tests.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/locale/TimeZone.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/locale/TranslatableConfiguration.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/modulesystem" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/Actions.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/Descriptor.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/InstanceKey.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/Module.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/Requirement.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/RequirementsChecker.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/modulesystem/RequirementsModel.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/network" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/network/Manager.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/network/Tests.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/partition" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/FileSystem.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/KPMManager.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/Mount.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/PartitionIterator.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/PartitionQuery.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/PartitionSize.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/Sync.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/partition/Tests.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/utils" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/BoostPython.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/CalamaresUtilsSystem.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/CommandList.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Dirs.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Entropy.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Logger.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/NamedEnum.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/NamedSuffix.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/PluginFactory.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/RAII.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Retranslator.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/String.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Tests.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/UMask.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Units.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Variant.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/Yaml.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamares/utils/moc-warnings.h"
    )
endif()

