# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build

# Include any dependencies generated for this target.
include CMakeFiles/Main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Main.dir/flags.make

CMakeFiles/Main.dir/Source/DataBase.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Source/DataBase.cpp.o: ../Source/DataBase.cpp
CMakeFiles/Main.dir/Source/DataBase.cpp.o: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Main.dir/Source/DataBase.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/Source/DataBase.cpp.o -MF CMakeFiles/Main.dir/Source/DataBase.cpp.o.d -o CMakeFiles/Main.dir/Source/DataBase.cpp.o -c /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/Source/DataBase.cpp

CMakeFiles/Main.dir/Source/DataBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Source/DataBase.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/Source/DataBase.cpp > CMakeFiles/Main.dir/Source/DataBase.cpp.i

CMakeFiles/Main.dir/Source/DataBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Source/DataBase.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/Source/DataBase.cpp -o CMakeFiles/Main.dir/Source/DataBase.cpp.s

CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o: ../Source/DataBase_Test.cpp
CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o: CMakeFiles/Main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o -MF CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o.d -o CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o -c /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/Source/DataBase_Test.cpp

CMakeFiles/Main.dir/Source/DataBase_Test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Source/DataBase_Test.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/Source/DataBase_Test.cpp > CMakeFiles/Main.dir/Source/DataBase_Test.cpp.i

CMakeFiles/Main.dir/Source/DataBase_Test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Source/DataBase_Test.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/Source/DataBase_Test.cpp -o CMakeFiles/Main.dir/Source/DataBase_Test.cpp.s

# Object files for target Main
Main_OBJECTS = \
"CMakeFiles/Main.dir/Source/DataBase.cpp.o" \
"CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o"

# External object files for target Main
Main_EXTERNAL_OBJECTS =

Main: CMakeFiles/Main.dir/Source/DataBase.cpp.o
Main: CMakeFiles/Main.dir/Source/DataBase_Test.cpp.o
Main: CMakeFiles/Main.dir/build.make
Main: /usr/local/lib/libboost_log.so.1.84.0
Main: /usr/lib/x86_64-linux-gnu/libgtest.a
Main: /usr/lib/x86_64-linux-gnu/libgmock_main.a
Main: /usr/local/lib/libboost_chrono.so.1.84.0
Main: /usr/local/lib/libboost_filesystem.so.1.84.0
Main: /usr/local/lib/libboost_atomic.so.1.84.0
Main: /usr/local/lib/libboost_thread.so.1.84.0
Main: /usr/lib/x86_64-linux-gnu/libgmock.a
Main: /usr/lib/x86_64-linux-gnu/libgtest.a
Main: CMakeFiles/Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Main.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=Main -D TEST_EXECUTABLE=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/Main -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=Main_TESTS -D CTEST_FILE=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/Main[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/Main.dir/build: Main
.PHONY : CMakeFiles/Main.dir/build

CMakeFiles/Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Main.dir/clean

CMakeFiles/Main.dir/depend:
	cd /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/CMakeFiles/Main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Main.dir/depend

