# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\School\DataStructure\Chapter2\LinkList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkList.dir/flags.make

CMakeFiles/LinkList.dir/linkList.c.obj: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/linkList.c.obj: ../linkList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinkList.dir/linkList.c.obj"
	c:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LinkList.dir\linkList.c.obj   -c D:\School\DataStructure\Chapter2\LinkList\linkList.c

CMakeFiles/LinkList.dir/linkList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkList.dir/linkList.c.i"
	c:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\School\DataStructure\Chapter2\LinkList\linkList.c > CMakeFiles\LinkList.dir\linkList.c.i

CMakeFiles/LinkList.dir/linkList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkList.dir/linkList.c.s"
	c:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\School\DataStructure\Chapter2\LinkList\linkList.c -o CMakeFiles\LinkList.dir\linkList.c.s

CMakeFiles/LinkList.dir/main.c.obj: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LinkList.dir/main.c.obj"
	c:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LinkList.dir\main.c.obj   -c D:\School\DataStructure\Chapter2\LinkList\main.c

CMakeFiles/LinkList.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinkList.dir/main.c.i"
	c:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\School\DataStructure\Chapter2\LinkList\main.c > CMakeFiles\LinkList.dir\main.c.i

CMakeFiles/LinkList.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinkList.dir/main.c.s"
	c:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\School\DataStructure\Chapter2\LinkList\main.c -o CMakeFiles\LinkList.dir\main.c.s

# Object files for target LinkList
LinkList_OBJECTS = \
"CMakeFiles/LinkList.dir/linkList.c.obj" \
"CMakeFiles/LinkList.dir/main.c.obj"

# External object files for target LinkList
LinkList_EXTERNAL_OBJECTS =

LinkList.exe: CMakeFiles/LinkList.dir/linkList.c.obj
LinkList.exe: CMakeFiles/LinkList.dir/main.c.obj
LinkList.exe: CMakeFiles/LinkList.dir/build.make
LinkList.exe: CMakeFiles/LinkList.dir/linklibs.rsp
LinkList.exe: CMakeFiles/LinkList.dir/objects1.rsp
LinkList.exe: CMakeFiles/LinkList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable LinkList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LinkList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkList.dir/build: LinkList.exe

.PHONY : CMakeFiles/LinkList.dir/build

CMakeFiles/LinkList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LinkList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LinkList.dir/clean

CMakeFiles/LinkList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\School\DataStructure\Chapter2\LinkList D:\School\DataStructure\Chapter2\LinkList D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug D:\School\DataStructure\Chapter2\LinkList\cmake-build-debug\CMakeFiles\LinkList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkList.dir/depend

