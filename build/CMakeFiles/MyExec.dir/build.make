# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build

# Include any dependencies generated for this target.
include CMakeFiles/MyExec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyExec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyExec.dir/flags.make

CMakeFiles/MyExec.dir/src/main.cpp.o: CMakeFiles/MyExec.dir/flags.make
CMakeFiles/MyExec.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyExec.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyExec.dir/src/main.cpp.o -c /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/src/main.cpp

CMakeFiles/MyExec.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyExec.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/src/main.cpp > CMakeFiles/MyExec.dir/src/main.cpp.i

CMakeFiles/MyExec.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyExec.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/src/main.cpp -o CMakeFiles/MyExec.dir/src/main.cpp.s

CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.o: CMakeFiles/MyExec.dir/flags.make
CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.o: ../src/queryProcess/create.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.o -c /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/src/queryProcess/create.cpp

CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/src/queryProcess/create.cpp > CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.i

CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/src/queryProcess/create.cpp -o CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.s

# Object files for target MyExec
MyExec_OBJECTS = \
"CMakeFiles/MyExec.dir/src/main.cpp.o" \
"CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.o"

# External object files for target MyExec
MyExec_EXTERNAL_OBJECTS =

MyExec: CMakeFiles/MyExec.dir/src/main.cpp.o
MyExec: CMakeFiles/MyExec.dir/src/queryProcess/create.cpp.o
MyExec: CMakeFiles/MyExec.dir/build.make
MyExec: CMakeFiles/MyExec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MyExec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyExec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyExec.dir/build: MyExec

.PHONY : CMakeFiles/MyExec.dir/build

CMakeFiles/MyExec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyExec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyExec.dir/clean

CMakeFiles/MyExec.dir/depend:
	cd /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build /home/prakash/DBPlus-Relational-Database-With-Minimal-Functionality/build/CMakeFiles/MyExec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyExec.dir/depend
