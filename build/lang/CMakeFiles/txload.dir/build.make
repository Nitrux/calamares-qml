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
include lang/CMakeFiles/txload.dir/depend.make

# Include the progress variables for this target.
include lang/CMakeFiles/txload.dir/progress.make

# Include the compile flags for this target's objects.
include lang/CMakeFiles/txload.dir/flags.make

lang/CMakeFiles/txload.dir/txload.cpp.o: lang/CMakeFiles/txload.dir/flags.make
lang/CMakeFiles/txload.dir/txload.cpp.o: ../lang/txload.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lang/CMakeFiles/txload.dir/txload.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/lang && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/txload.dir/txload.cpp.o -c /home/camilo/Coding/c++/calamares-qml/lang/txload.cpp

lang/CMakeFiles/txload.dir/txload.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/txload.dir/txload.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/lang && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/lang/txload.cpp > CMakeFiles/txload.dir/txload.cpp.i

lang/CMakeFiles/txload.dir/txload.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/txload.dir/txload.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/lang && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/lang/txload.cpp -o CMakeFiles/txload.dir/txload.cpp.s

# Object files for target txload
txload_OBJECTS = \
"CMakeFiles/txload.dir/txload.cpp.o"

# External object files for target txload
txload_EXTERNAL_OBJECTS =

lang/txload: lang/CMakeFiles/txload.dir/txload.cpp.o
lang/txload: lang/CMakeFiles/txload.dir/build.make
lang/txload: /usr/lib/libQt5Xml.so.5.15.0
lang/txload: /usr/lib/libQt5Core.so.5.15.0
lang/txload: lang/CMakeFiles/txload.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable txload"
	cd /home/camilo/Coding/c++/calamares-qml/build/lang && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/txload.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lang/CMakeFiles/txload.dir/build: lang/txload

.PHONY : lang/CMakeFiles/txload.dir/build

lang/CMakeFiles/txload.dir/clean:
	cd /home/camilo/Coding/c++/calamares-qml/build/lang && $(CMAKE_COMMAND) -P CMakeFiles/txload.dir/cmake_clean.cmake
.PHONY : lang/CMakeFiles/txload.dir/clean

lang/CMakeFiles/txload.dir/depend:
	cd /home/camilo/Coding/c++/calamares-qml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/camilo/Coding/c++/calamares-qml /home/camilo/Coding/c++/calamares-qml/lang /home/camilo/Coding/c++/calamares-qml/build /home/camilo/Coding/c++/calamares-qml/build/lang /home/camilo/Coding/c++/calamares-qml/build/lang/CMakeFiles/txload.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lang/CMakeFiles/txload.dir/depend

