# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/camilo/Coding/c++/calamares-qml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/camilo/Coding/c++/calamares-qml/build

# Include any dependencies generated for this target.
include src/libcalamares/CMakeFiles/geoiptest.dir/depend.make

# Include the progress variables for this target.
include src/libcalamares/CMakeFiles/geoiptest.dir/progress.make

# Include the compile flags for this target's objects.
include src/libcalamares/CMakeFiles/geoiptest.dir/flags.make

src/libcalamares/CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.o: src/libcalamares/CMakeFiles/geoiptest.dir/flags.make
src/libcalamares/CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.o: src/libcalamares/geoiptest_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/libcalamares/CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.o -c /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/geoiptest_autogen/mocs_compilation.cpp

src/libcalamares/CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/geoiptest_autogen/mocs_compilation.cpp > CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.i

src/libcalamares/CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/geoiptest_autogen/mocs_compilation.cpp -o CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.s

src/libcalamares/CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.o: src/libcalamares/CMakeFiles/geoiptest.dir/flags.make
src/libcalamares/CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.o: ../src/libcalamares/geoip/GeoIPTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/libcalamares/CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPTests.cpp

src/libcalamares/CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPTests.cpp > CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.i

src/libcalamares/CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/libcalamares/geoip/GeoIPTests.cpp -o CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.s

# Object files for target geoiptest
geoiptest_OBJECTS = \
"CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.o"

# External object files for target geoiptest
geoiptest_EXTERNAL_OBJECTS =

geoiptest: src/libcalamares/CMakeFiles/geoiptest.dir/geoiptest_autogen/mocs_compilation.cpp.o
geoiptest: src/libcalamares/CMakeFiles/geoiptest.dir/geoip/GeoIPTests.cpp.o
geoiptest: src/libcalamares/CMakeFiles/geoiptest.dir/build.make
geoiptest: libcalamares.so.3.2.26
geoiptest: /usr/lib/libQt5Test.so.5.15.0
geoiptest: /usr/lib/libQt5Network.so.5.15.0
geoiptest: /usr/lib/libQt5Xml.so.5.15.0
geoiptest: /usr/lib/libKF5CoreAddons.so.5.70.0
geoiptest: /usr/lib/libQt5Core.so.5.15.0
geoiptest: src/libcalamares/CMakeFiles/geoiptest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../geoiptest"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geoiptest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/libcalamares/CMakeFiles/geoiptest.dir/build: geoiptest

.PHONY : src/libcalamares/CMakeFiles/geoiptest.dir/build

src/libcalamares/CMakeFiles/geoiptest.dir/clean:
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && $(CMAKE_COMMAND) -P CMakeFiles/geoiptest.dir/cmake_clean.cmake
.PHONY : src/libcalamares/CMakeFiles/geoiptest.dir/clean

src/libcalamares/CMakeFiles/geoiptest.dir/depend:
	cd /home/camilo/Coding/c++/calamares-qml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/camilo/Coding/c++/calamares-qml /home/camilo/Coding/c++/calamares-qml/src/libcalamares /home/camilo/Coding/c++/calamares-qml/build /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/CMakeFiles/geoiptest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/libcalamares/CMakeFiles/geoiptest.dir/depend

