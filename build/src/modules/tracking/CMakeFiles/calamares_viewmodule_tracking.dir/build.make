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
include src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/depend.make

# Include the progress variables for this target.
include src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/flags.make

src/modules/tracking/qrc_page_trackingstep.cpp: ../src/modules/tracking/level-none.svg
src/modules/tracking/qrc_page_trackingstep.cpp: ../src/modules/tracking/level-install.svg
src/modules/tracking/qrc_page_trackingstep.cpp: ../src/modules/tracking/level-machine.svg
src/modules/tracking/qrc_page_trackingstep.cpp: ../src/modules/tracking/level-user.svg
src/modules/tracking/qrc_page_trackingstep.cpp: ../data/images/information.svgz
src/modules/tracking/qrc_page_trackingstep.cpp: src/modules/tracking/page_trackingstep.qrc.depends
src/modules/tracking/qrc_page_trackingstep.cpp: ../src/modules/tracking/page_trackingstep.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_page_trackingstep.cpp"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/rcc --name page_trackingstep --output /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/qrc_page_trackingstep.cpp /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/page_trackingstep.qrc

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.o: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/flags.make
src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.o: src/modules/tracking/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.o -c /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp > CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.i

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp -o CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.s

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.o: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/flags.make
src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.o: ../src/modules/tracking/TrackingJobs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingJobs.cpp

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingJobs.cpp > CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.i

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingJobs.cpp -o CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.s

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.o: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/flags.make
src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.o: ../src/modules/tracking/TrackingPage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingPage.cpp

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingPage.cpp > CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.i

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingPage.cpp -o CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.s

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.o: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/flags.make
src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.o: ../src/modules/tracking/TrackingViewStep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingViewStep.cpp

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingViewStep.cpp > CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.i

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/tracking/TrackingViewStep.cpp -o CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.s

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.o: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/flags.make
src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.o: src/modules/tracking/qrc_page_trackingstep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.o -c /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/qrc_page_trackingstep.cpp

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/qrc_page_trackingstep.cpp > CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.i

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/qrc_page_trackingstep.cpp -o CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.s

# Object files for target calamares_viewmodule_tracking
calamares_viewmodule_tracking_OBJECTS = \
"CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.o" \
"CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.o" \
"CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.o" \
"CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.o"

# External object files for target calamares_viewmodule_tracking
calamares_viewmodule_tracking_EXTERNAL_OBJECTS =

src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/calamares_viewmodule_tracking_autogen/mocs_compilation.cpp.o
src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingJobs.cpp.o
src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingPage.cpp.o
src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/TrackingViewStep.cpp.o
src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/qrc_page_trackingstep.cpp.o
src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/build.make
src/modules/tracking/libcalamares_viewmodule_tracking.so: libcalamaresui.so.3.2.26
src/modules/tracking/libcalamares_viewmodule_tracking.so: libcalamares.so.3.2.26
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Xml.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libKF5CoreAddons.so.5.70.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Svg.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libyaml-cpp.so
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5QuickWidgets.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Widgets.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Quick.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Gui.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5QmlModels.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Qml.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Network.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: /usr/lib/libQt5Core.so.5.15.0
src/modules/tracking/libcalamares_viewmodule_tracking.so: src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library libcalamares_viewmodule_tracking.so"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calamares_viewmodule_tracking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/build: src/modules/tracking/libcalamares_viewmodule_tracking.so

.PHONY : src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/build

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/clean:
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking && $(CMAKE_COMMAND) -P CMakeFiles/calamares_viewmodule_tracking.dir/cmake_clean.cmake
.PHONY : src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/clean

src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/depend: src/modules/tracking/qrc_page_trackingstep.cpp
	cd /home/camilo/Coding/c++/calamares-qml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/camilo/Coding/c++/calamares-qml /home/camilo/Coding/c++/calamares-qml/src/modules/tracking /home/camilo/Coding/c++/calamares-qml/build /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking /home/camilo/Coding/c++/calamares-qml/build/src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/tracking/CMakeFiles/calamares_viewmodule_tracking.dir/depend

