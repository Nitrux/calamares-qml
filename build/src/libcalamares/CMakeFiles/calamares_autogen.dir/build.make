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

# Utility rule file for calamares_autogen.

# Include the progress variables for this target.
include src/libcalamares/CMakeFiles/calamares_autogen.dir/progress.make

src/libcalamares/CMakeFiles/calamares_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target calamares"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && /usr/bin/cmake -E cmake_autogen /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/CMakeFiles/calamares_autogen.dir/AutogenInfo.json ""

calamares_autogen: src/libcalamares/CMakeFiles/calamares_autogen
calamares_autogen: src/libcalamares/CMakeFiles/calamares_autogen.dir/build.make

.PHONY : calamares_autogen

# Rule to build all files generated by this target.
src/libcalamares/CMakeFiles/calamares_autogen.dir/build: calamares_autogen

.PHONY : src/libcalamares/CMakeFiles/calamares_autogen.dir/build

src/libcalamares/CMakeFiles/calamares_autogen.dir/clean:
	cd /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares && $(CMAKE_COMMAND) -P CMakeFiles/calamares_autogen.dir/cmake_clean.cmake
.PHONY : src/libcalamares/CMakeFiles/calamares_autogen.dir/clean

src/libcalamares/CMakeFiles/calamares_autogen.dir/depend:
	cd /home/camilo/Coding/c++/calamares-qml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/camilo/Coding/c++/calamares-qml /home/camilo/Coding/c++/calamares-qml/src/libcalamares /home/camilo/Coding/c++/calamares-qml/build /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares /home/camilo/Coding/c++/calamares-qml/build/src/libcalamares/CMakeFiles/calamares_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/libcalamares/CMakeFiles/calamares_autogen.dir/depend

