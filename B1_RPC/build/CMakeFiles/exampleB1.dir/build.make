# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /home/qinzuyin/trackingtest/B1_2/B1_RPC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qinzuyin/trackingtest/B1_2/B1_RPC/build

# Include any dependencies generated for this target.
include CMakeFiles/exampleB1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exampleB1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exampleB1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exampleB1.dir/flags.make

CMakeFiles/exampleB1.dir/exampleB1.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/exampleB1.cc.o: ../exampleB1.cc
CMakeFiles/exampleB1.dir/exampleB1.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exampleB1.dir/exampleB1.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/exampleB1.cc.o -MF CMakeFiles/exampleB1.dir/exampleB1.cc.o.d -o CMakeFiles/exampleB1.dir/exampleB1.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/exampleB1.cc

CMakeFiles/exampleB1.dir/exampleB1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/exampleB1.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/exampleB1.cc > CMakeFiles/exampleB1.dir/exampleB1.cc.i

CMakeFiles/exampleB1.dir/exampleB1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/exampleB1.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/exampleB1.cc -o CMakeFiles/exampleB1.dir/exampleB1.cc.s

CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o: ../src/ActionInitialization.cc
CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o -MF CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o.d -o CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/ActionInitialization.cc

CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/ActionInitialization.cc > CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.i

CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/ActionInitialization.cc -o CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.s

CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o: ../src/DetectorConstruction.cc
CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o -MF CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o.d -o CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/DetectorConstruction.cc

CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/DetectorConstruction.cc > CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.i

CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/DetectorConstruction.cc -o CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.s

CMakeFiles/exampleB1.dir/src/EventAction.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/src/EventAction.cc.o: ../src/EventAction.cc
CMakeFiles/exampleB1.dir/src/EventAction.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/exampleB1.dir/src/EventAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/src/EventAction.cc.o -MF CMakeFiles/exampleB1.dir/src/EventAction.cc.o.d -o CMakeFiles/exampleB1.dir/src/EventAction.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/EventAction.cc

CMakeFiles/exampleB1.dir/src/EventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/src/EventAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/EventAction.cc > CMakeFiles/exampleB1.dir/src/EventAction.cc.i

CMakeFiles/exampleB1.dir/src/EventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/src/EventAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/EventAction.cc -o CMakeFiles/exampleB1.dir/src/EventAction.cc.s

CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o: ../src/PrimaryGeneratorAction.cc
CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o -MF CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o.d -o CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/PrimaryGeneratorAction.cc

CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/PrimaryGeneratorAction.cc > CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.i

CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/PrimaryGeneratorAction.cc -o CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.s

CMakeFiles/exampleB1.dir/src/RunAction.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/src/RunAction.cc.o: ../src/RunAction.cc
CMakeFiles/exampleB1.dir/src/RunAction.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/exampleB1.dir/src/RunAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/src/RunAction.cc.o -MF CMakeFiles/exampleB1.dir/src/RunAction.cc.o.d -o CMakeFiles/exampleB1.dir/src/RunAction.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/RunAction.cc

CMakeFiles/exampleB1.dir/src/RunAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/src/RunAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/RunAction.cc > CMakeFiles/exampleB1.dir/src/RunAction.cc.i

CMakeFiles/exampleB1.dir/src/RunAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/src/RunAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/RunAction.cc -o CMakeFiles/exampleB1.dir/src/RunAction.cc.s

CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o: CMakeFiles/exampleB1.dir/flags.make
CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o: ../src/SteppingAction.cc
CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o: CMakeFiles/exampleB1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o -MF CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o.d -o CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o -c /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/SteppingAction.cc

CMakeFiles/exampleB1.dir/src/SteppingAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB1.dir/src/SteppingAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/SteppingAction.cc > CMakeFiles/exampleB1.dir/src/SteppingAction.cc.i

CMakeFiles/exampleB1.dir/src/SteppingAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB1.dir/src/SteppingAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qinzuyin/trackingtest/B1_2/B1_RPC/src/SteppingAction.cc -o CMakeFiles/exampleB1.dir/src/SteppingAction.cc.s

# Object files for target exampleB1
exampleB1_OBJECTS = \
"CMakeFiles/exampleB1.dir/exampleB1.cc.o" \
"CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o" \
"CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o" \
"CMakeFiles/exampleB1.dir/src/EventAction.cc.o" \
"CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o" \
"CMakeFiles/exampleB1.dir/src/RunAction.cc.o" \
"CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o"

# External object files for target exampleB1
exampleB1_EXTERNAL_OBJECTS =

exampleB1: CMakeFiles/exampleB1.dir/exampleB1.cc.o
exampleB1: CMakeFiles/exampleB1.dir/src/ActionInitialization.cc.o
exampleB1: CMakeFiles/exampleB1.dir/src/DetectorConstruction.cc.o
exampleB1: CMakeFiles/exampleB1.dir/src/EventAction.cc.o
exampleB1: CMakeFiles/exampleB1.dir/src/PrimaryGeneratorAction.cc.o
exampleB1: CMakeFiles/exampleB1.dir/src/RunAction.cc.o
exampleB1: CMakeFiles/exampleB1.dir/src/SteppingAction.cc.o
exampleB1: CMakeFiles/exampleB1.dir/build.make
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4Tree.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4FR.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4GMocren.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4visHepRep.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4RayTracer.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4VRML.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4ToolsSG.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4OpenGL.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4vis_management.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4modeling.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4interfaces.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4persistency.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4error_propagation.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4readout.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4physicslists.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4run.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4event.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4tracking.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4parmodels.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4processes.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4digits_hits.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4track.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4particles.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4geometry.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4materials.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4graphics_reps.so
exampleB1: /usr/lib64/libGL.so
exampleB1: /usr/lib64/libQt5OpenGL.so.5.15.3
exampleB1: /usr/lib64/libQt5PrintSupport.so.5.15.3
exampleB1: /usr/lib64/libQt5Widgets.so.5.15.3
exampleB1: /usr/lib64/libQt5Gui.so.5.15.3
exampleB1: /usr/lib64/libQt5Core.so.5.15.3
exampleB1: /usr/local/lib64/libxerces-c.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4analysis.so
exampleB1: /usr/lib64/libexpat.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4zlib.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4intercoms.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4global.so
exampleB1: /home/qinzuyin/Geant4/geant4/lib64/libG4ptl.so.2.3.3
exampleB1: /usr/local/lib/libCLHEP-2.4.6.4.so
exampleB1: CMakeFiles/exampleB1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable exampleB1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exampleB1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exampleB1.dir/build: exampleB1
.PHONY : CMakeFiles/exampleB1.dir/build

CMakeFiles/exampleB1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exampleB1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exampleB1.dir/clean

CMakeFiles/exampleB1.dir/depend:
	cd /home/qinzuyin/trackingtest/B1_2/B1_RPC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qinzuyin/trackingtest/B1_2/B1_RPC /home/qinzuyin/trackingtest/B1_2/B1_RPC /home/qinzuyin/trackingtest/B1_2/B1_RPC/build /home/qinzuyin/trackingtest/B1_2/B1_RPC/build /home/qinzuyin/trackingtest/B1_2/B1_RPC/build/CMakeFiles/exampleB1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exampleB1.dir/depend
