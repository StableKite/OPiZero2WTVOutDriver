# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /home/orangepi/TunerProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/orangepi/TunerProject/build

# Include any dependencies generated for this target.
include CMakeFiles/TunerExec.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TunerExec.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TunerExec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TunerExec.dir/flags.make

CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerDemux.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerDemux.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerDemux.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerDemux.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerDescrambler.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerDescrambler.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerDescrambler.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerDescrambler.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerDvr.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerDvr.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerDvr.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerDvr.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerFilter.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerFilter.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerFilter.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerFilter.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerFrontend.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerFrontend.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerFrontend.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerFrontend.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerLnb.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerLnb.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerLnb.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerLnb.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerService.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerService.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerService.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerService.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o: /home/orangepi/TunerProject/src/tuner/TunerTimeFilter.cpp
CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o -c /home/orangepi/TunerProject/src/tuner/TunerTimeFilter.cpp

CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/TunerTimeFilter.cpp > CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/TunerTimeFilter.cpp -o CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.s

CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o: CMakeFiles/TunerExec.dir/flags.make
CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o: /home/orangepi/TunerProject/src/tuner/main_tunerservice.cpp
CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o: CMakeFiles/TunerExec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o -MF CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o.d -o CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o -c /home/orangepi/TunerProject/src/tuner/main_tunerservice.cpp

CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.i"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/orangepi/TunerProject/src/tuner/main_tunerservice.cpp > CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.i

CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.s"
	aarch64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/orangepi/TunerProject/src/tuner/main_tunerservice.cpp -o CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.s

# Object files for target TunerExec
TunerExec_OBJECTS = \
"CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o" \
"CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o"

# External object files for target TunerExec
TunerExec_EXTERNAL_OBJECTS =

TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerDemux.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerDescrambler.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerDvr.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerFilter.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerFrontend.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerLnb.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerService.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/TunerTimeFilter.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/src/tuner/main_tunerservice.cpp.o
TunerExec: CMakeFiles/TunerExec.dir/build.make
TunerExec: libTuner.a
TunerExec: CMakeFiles/TunerExec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/orangepi/TunerProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable TunerExec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TunerExec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TunerExec.dir/build: TunerExec
.PHONY : CMakeFiles/TunerExec.dir/build

CMakeFiles/TunerExec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TunerExec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TunerExec.dir/clean

CMakeFiles/TunerExec.dir/depend:
	cd /home/orangepi/TunerProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/orangepi/TunerProject /home/orangepi/TunerProject /home/orangepi/TunerProject/build /home/orangepi/TunerProject/build /home/orangepi/TunerProject/build/CMakeFiles/TunerExec.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TunerExec.dir/depend

