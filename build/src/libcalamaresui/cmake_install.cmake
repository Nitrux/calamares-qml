# Install script for directory: /home/camilo/Coding/c++/calamares-qml/src/libcalamaresui

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/camilo/Coding/c++/calamares-qml/build/libcalamaresui.so.3.2.26")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26"
         OLD_RPATH "/home/camilo/Coding/c++/calamares-qml/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.26")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/camilo/Coding/c++/calamares-qml/build/libcalamaresui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so"
         OLD_RPATH "/home/camilo/Coding/c++/calamares-qml/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/Branding.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/ViewManager.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/modulesystem" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/CppJobModule.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/ModuleFactory.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/ModuleManager.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/ProcessJobModule.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/PythonJobModule.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/PythonQtViewModule.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/modulesystem/ViewModule.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/utils" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/utils/CalamaresUtilsGui.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/utils/ImageRegistry.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/utils/Paste.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/utils/PythonQtUtils.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/utils/Qml.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/viewpages" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/BlankViewStep.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/ExecutionViewStep.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/PythonQtGlobalStorageWrapper.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/PythonQtJob.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/PythonQtUtilsWrapper.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/PythonQtViewStep.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/QmlViewStep.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/Slideshow.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/viewpages/ViewStep.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/widgets" TYPE FILE FILES
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/widgets/ClickableLabel.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/widgets/FixedAspectRatioLabel.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/widgets/PrettyRadioButton.h"
    "/home/camilo/Coding/c++/calamares-qml/src/libcalamaresui/widgets/WaitingWidget.h"
    )
endif()

