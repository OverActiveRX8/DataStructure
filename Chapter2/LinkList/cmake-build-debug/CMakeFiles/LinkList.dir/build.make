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
CMAKE_SOURCE_DIR = /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkList.dir/flags.make

CMakeFiles/LinkList.dir/main.c.o: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinkList.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LinkList.dir/main.c.o   -c /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/main.c

CMakeFiles/LinkList.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkList.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/main.c > CMakeFiles/LinkList.dir/main.c.i

CMakeFiles/LinkList.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkList.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/main.c -o CMakeFiles/LinkList.dir/main.c.s

CMakeFiles/LinkList.dir/linkList.c.o: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/linkList.c.o: ../linkList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LinkList.dir/linkList.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LinkList.dir/linkList.c.o   -c /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/linkList.c

CMakeFiles/LinkList.dir/linkList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkList.dir/linkList.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/linkList.c > CMakeFiles/LinkList.dir/linkList.c.i

CMakeFiles/LinkList.dir/linkList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkList.dir/linkList.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/linkList.c -o CMakeFiles/LinkList.dir/linkList.c.s

# Object files for target LinkList
LinkList_OBJECTS = \
"CMakeFiles/LinkList.dir/main.c.o" \
"CMakeFiles/LinkList.dir/linkList.c.o"

# External object files for target LinkList
LinkList_EXTERNAL_OBJECTS =

LinkList: CMakeFiles/LinkList.dir/main.c.o
LinkList: CMakeFiles/LinkList.dir/linkList.c.o
LinkList: CMakeFiles/LinkList.dir/build.make
LinkList: CMakeFiles/LinkList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable LinkList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkList.dir/build: LinkList

.PHONY : CMakeFiles/LinkList.dir/build

CMakeFiles/LinkList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkList.dir/clean

CMakeFiles/LinkList.dir/depend:
	cd /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug /run/media/pjpalanas/DATA/School/DataStructure/Chapter2/LinkList/cmake-build-debug/CMakeFiles/LinkList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkList.dir/depend

