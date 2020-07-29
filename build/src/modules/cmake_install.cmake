# Install script for directory: /home/camilo/Coding/c++/calamares-qml/src/modules

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/bootloader" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/bootloader/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/bootloader" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/bootloader/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/bootloader" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/bootloader/test.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/bootloaderq" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/bootloaderq/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/bootloaderq" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/bootloaderq/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/bootloaderq" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/bootloaderq/test.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/displaymanager" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/displaymanager/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/displaymanager" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/displaymanager/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/dracut" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/dracut/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/dracut" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/dracut/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/dummyprocess" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/dummyprocess/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/dummypython" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/dummypython/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/dummypython" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/dummypython/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/fstab" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/fstab/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/fstab" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/fstab/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/fstab" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/fstab/test.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/grubcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/grubcfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/grubcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/grubcfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/hwclock" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/hwclock/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/hwclock" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/hwclock/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/initcpiocfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/initcpiocfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/initcpiocfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/initcpiocfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/initramfscfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/initramfscfg/encrypt_hook")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/initramfscfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/initramfscfg/encrypt_hook_nokey")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/initramfscfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/initramfscfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/initramfscfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/initramfscfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/localecfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/localecfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/localecfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/localecfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/luksopenswaphookcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/luksopenswaphookcfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/luksopenswaphookcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/luksopenswaphookcfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/mount" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/mount/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/mount" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/mount/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/mount" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/mount/test.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/networkcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/networkcfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/networkcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/networkcfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/openrcdmcryptcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/openrcdmcryptcfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/openrcdmcryptcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/openrcdmcryptcfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/packages" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/packages/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/packages" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/packages/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/packages" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/packages/test.yaml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/plymouthcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/plymouthcfg/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/plymouthcfg" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/plymouthcfg/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/rawfs" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/rawfs/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/rawfs" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/rawfs/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/services-openrc" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/services-openrc/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/services-openrc" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/services-openrc/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/services-systemd" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/services-systemd/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/services-systemd" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/services-systemd/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/umount" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/umount/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/umount" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/umount/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/unpackfs" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/unpackfs/main.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/unpackfs" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/unpackfs/module.desc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/calamares/modules/unpackfs" TYPE FILE FILES "/home/camilo/Coding/c++/calamares-qml/build/src/modules/unpackfs/runtests.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ar/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ar/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/as/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/as/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ast/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ast/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/be/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/be/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/bg/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/bg/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ca/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ca/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/cs_CZ/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/cs_CZ/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/da/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/da/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/de/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/de/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/el/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/el/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/en_GB/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/en_GB/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eo/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/eo/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/es/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es_MX/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/es_MX/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/es_PR/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/es_PR/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/et/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/et/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/eu/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/eu/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fi_FI/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/fi_FI/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/fr/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/fr/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/gl/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/gl/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/he/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/he/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hi/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/hi/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hr/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/hr/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/hu/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/hu/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/id/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/id/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/is/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/is/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/it_IT/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/it_IT/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ja/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ja/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ko/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ko/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/lt/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/lt/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ml/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ml/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/mr/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/mr/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nb/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/nb/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/nl/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/nl/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pl/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/pl/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_BR/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/pt_BR/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/pt_PT/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/pt_PT/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ro/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ro/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/ru/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/ru/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sk/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/sk/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sl/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/sl/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sq/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/sq/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/sr/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sr@latin/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/sr@latin/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/sv/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/sv/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/th/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/th/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/tr_TR/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/tr_TR/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/uk/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/uk/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_CN/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/zh_CN/LC_MESSAGES/python.mo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/locale/zh_TW/LC_MESSAGES" TYPE FILE RENAME "calamares-python.mo" FILES "/home/camilo/Coding/c++/calamares-qml/lang/python/zh_TW/LC_MESSAGES/python.mo")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/contextualprocess/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/dracutlukscfg/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/dummycpp/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/finished/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/finishedq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/fsresizer/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/hostinfo/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/initcpio/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/initramfs/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/interactiveterminal/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/keyboard/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/keyboardq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/license/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/locale/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/localeq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/luksbootkeyfile/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/machineid/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/netinstall/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/notesqml/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/oemid/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/packagechooser/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/partition/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/partitionq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/plasmalnf/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/plasmalnfq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/preservefiles/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/removeuser/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/shellprocess/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/summary/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/summaryq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/users/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/usersq/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/webview/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/cmake_install.cmake")
  include("/home/camilo/Coding/c++/calamares-qml/build/src/modules/welcomeq/cmake_install.cmake")

endif()

