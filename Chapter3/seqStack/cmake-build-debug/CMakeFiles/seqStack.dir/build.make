# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/seqStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/seqStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/seqStack.dir/flags.make

CMakeFiles/seqStack.dir/main.c.o: CMakeFiles/seqStack.dir/flags.make
CMakeFiles/seqStack.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/seqStack.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/seqStack.dir/main.c.o   -c /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/main.c

CMakeFiles/seqStack.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/seqStack.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/main.c > CMakeFiles/seqStack.dir/main.c.i

CMakeFiles/seqStack.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/seqStack.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/main.c -o CMakeFiles/seqStack.dir/main.c.s

CMakeFiles/seqStack.dir/seqStack.c.o: CMakeFiles/seqStack.dir/flags.make
CMakeFiles/seqStack.dir/seqStack.c.o: ../seqStack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/seqStack.dir/seqStack.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/seqStack.dir/seqStack.c.o   -c /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/seqStack.c

CMakeFiles/seqStack.dir/seqStack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/seqStack.dir/seqStack.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/seqStack.c > CMakeFiles/seqStack.dir/seqStack.c.i

CMakeFiles/seqStack.dir/seqStack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/seqStack.dir/seqStack.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/seqStack.c -o CMakeFiles/seqStack.dir/seqStack.c.s

# Object files for target seqStack
seqStack_OBJECTS = \
"CMakeFiles/seqStack.dir/main.c.o" \
"CMakeFiles/seqStack.dir/seqStack.c.o"

# External object files for target seqStack
seqStack_EXTERNAL_OBJECTS =

seqStack: CMakeFiles/seqStack.dir/main.c.o
seqStack: CMakeFiles/seqStack.dir/seqStack.c.o
seqStack: CMakeFiles/seqStack.dir/build.make
seqStack: CMakeFiles/seqStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable seqStack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/seqStack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/seqStack.dir/build: seqStack

.PHONY : CMakeFiles/seqStack.dir/build

CMakeFiles/seqStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/seqStack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/seqStack.dir/clean

CMakeFiles/seqStack.dir/depend:
	cd /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug /run/media/pjpalanas/DATA/School/DataStructure/Chapter3/seqStack/cmake-build-debug/CMakeFiles/seqStack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/seqStack.dir/depend

