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
include src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/depend.make

# Include the progress variables for this target.
include src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make

src/modules/welcome/qrc_welcome.cpp: ../src/modules/welcome/language-icon-128px.png
src/modules/welcome/qrc_welcome.cpp: ../src/modules/welcome/language-icon-48px.png
src/modules/welcome/qrc_welcome.cpp: src/modules/welcome/welcome.qrc.depends
src/modules/welcome/qrc_welcome.cpp: ../src/modules/welcome/welcome.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_welcome.cpp"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/rcc --name welcome --output /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/qrc_welcome.cpp /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/welcome.qrc

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.o: src/modules/welcome/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.o -c /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.o: ../src/modules/welcome/checker/CheckerContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/CheckerContainer.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/CheckerContainer.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/CheckerContainer.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.o: ../src/modules/welcome/checker/GeneralRequirements.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/GeneralRequirements.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/GeneralRequirements.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/GeneralRequirements.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.o: ../src/modules/welcome/checker/ResultWidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/ResultWidget.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/ResultWidget.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/ResultWidget.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.o: ../src/modules/welcome/checker/ResultsListWidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/ResultsListWidget.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/ResultsListWidget.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/ResultsListWidget.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.o: ../src/modules/welcome/checker/partman_devices.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.o   -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/partman_devices.c

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/partman_devices.c > CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/checker/partman_devices.c -o CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.o: ../src/modules/welcome/WelcomeViewStep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/WelcomeViewStep.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/WelcomeViewStep.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/WelcomeViewStep.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.o: ../src/modules/welcome/Config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/Config.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/Config.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/Config.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.o: ../src/modules/welcome/WelcomePage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.o -c /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/WelcomePage.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/WelcomePage.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/src/modules/welcome/WelcomePage.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.s

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.o: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/flags.make
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.o: src/modules/welcome/qrc_welcome.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.o"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.o -c /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/qrc_welcome.cpp

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.i"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/qrc_welcome.cpp > CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.i

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.s"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/qrc_welcome.cpp -o CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.s

# Object files for target calamares_viewmodule_welcome
calamares_viewmodule_welcome_OBJECTS = \
"CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.o" \
"CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.o"

# External object files for target calamares_viewmodule_welcome
calamares_viewmodule_welcome_EXTERNAL_OBJECTS =

src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/calamares_viewmodule_welcome_autogen/mocs_compilation.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/CheckerContainer.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/GeneralRequirements.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultWidget.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/ResultsListWidget.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/checker/partman_devices.c.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomeViewStep.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/Config.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/WelcomePage.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/qrc_welcome.cpp.o
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/build.make
src/modules/welcome/libcalamares_viewmodule_welcome.so: libcalamaresui.so.3.2.26
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libparted.so
src/modules/welcome/libcalamares_viewmodule_welcome.so: libcalamares.so.3.2.26
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Xml.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5DBus.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libKF5CoreAddons.so.5.70.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Svg.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libyaml-cpp.so
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5QuickWidgets.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Widgets.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Quick.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Gui.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5QmlModels.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Qml.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Network.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: /usr/lib/libQt5Core.so.5.15.0
src/modules/welcome/libcalamares_viewmodule_welcome.so: src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/camilo/Coding/c++/calamares-qml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX shared library libcalamares_viewmodule_welcome.so"
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calamares_viewmodule_welcome.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/build: src/modules/welcome/libcalamares_viewmodule_welcome.so

.PHONY : src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/build

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/clean:
	cd /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome && $(CMAKE_COMMAND) -P CMakeFiles/calamares_viewmodule_welcome.dir/cmake_clean.cmake
.PHONY : src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/clean

src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/depend: src/modules/welcome/qrc_welcome.cpp
	cd /home/camilo/Coding/c++/calamares-qml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/camilo/Coding/c++/calamares-qml /home/camilo/Coding/c++/calamares-qml/src/modules/welcome /home/camilo/Coding/c++/calamares-qml/build /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome /home/camilo/Coding/c++/calamares-qml/build/src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/welcome/CMakeFiles/calamares_viewmodule_welcome.dir/depend

