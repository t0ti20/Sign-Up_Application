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
CMAKE_SOURCE_DIR = /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build

# Include any dependencies generated for this target.
include CMakeFiles/Sign_Up.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Sign_Up.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Sign_Up.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sign_Up.dir/flags.make

CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o: CMakeFiles/Sign_Up.dir/flags.make
CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o: ../Source/Application/Main.cpp
CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o: CMakeFiles/Sign_Up.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o -MF CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o.d -o CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o -c /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Source/Application/Main.cpp

CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Source/Application/Main.cpp > CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.i

CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Source/Application/Main.cpp -o CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.s

CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o: CMakeFiles/Sign_Up.dir/flags.make
CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o: ../Source/Company/Signup.cpp
CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o: CMakeFiles/Sign_Up.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o -MF CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o.d -o CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o -c /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Source/Company/Signup.cpp

CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Source/Company/Signup.cpp > CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.i

CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Source/Company/Signup.cpp -o CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.s

# Object files for target Sign_Up
Sign_Up_OBJECTS = \
"CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o" \
"CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o"

# External object files for target Sign_Up
Sign_Up_EXTERNAL_OBJECTS =

Sign_Up: CMakeFiles/Sign_Up.dir/Source/Application/Main.cpp.o
Sign_Up: CMakeFiles/Sign_Up.dir/Source/Company/Signup.cpp.o
Sign_Up: CMakeFiles/Sign_Up.dir/build.make
Sign_Up: Libraries/libDataBase.so
Sign_Up: /usr/local/lib/libboost_log.so.1.84.0
Sign_Up: /usr/local/lib/libboost_chrono.so.1.84.0
Sign_Up: /usr/local/lib/libboost_filesystem.so.1.84.0
Sign_Up: /usr/local/lib/libboost_atomic.so.1.84.0
Sign_Up: /usr/local/lib/libboost_thread.so.1.84.0
Sign_Up: CMakeFiles/Sign_Up.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Sign_Up"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sign_Up.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sign_Up.dir/build: Sign_Up
.PHONY : CMakeFiles/Sign_Up.dir/build

CMakeFiles/Sign_Up.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sign_Up.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sign_Up.dir/clean

CMakeFiles/Sign_Up.dir/depend:
	cd /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/build/CMakeFiles/Sign_Up.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sign_Up.dir/depend

