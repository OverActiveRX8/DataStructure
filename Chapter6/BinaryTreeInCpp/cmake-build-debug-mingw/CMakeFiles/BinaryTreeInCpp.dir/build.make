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
CMAKE_SOURCE_DIR = D:\School\DataStructure\Chapter6\BinaryTreeInCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\School\DataStructure\Chapter6\BinaryTreeInCpp\cmake-build-debug-mingw

# Include any dependencies generated for this target.
include CMakeFiles/BinaryTreeInCpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryTreeInCpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryTreeInCpp.dir/flags.make

CMakeFiles/BinaryTreeInCpp.dir/main.cpp.obj: CMakeFiles/BinaryTreeInCpp.dir/flags.make
CMakeFiles/BinaryTreeInCpp.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\School\DataStructure\Chapter6\BinaryTreeInCpp\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BinaryTreeInCpp.dir/main.cpp.obj"
	C:\MinGW\bin\mingw32-g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BinaryTreeInCpp.dir\main.cpp.obj -c D:\School\DataStructure\Chapter6\BinaryTreeInCpp\main.cpp

CMakeFiles/BinaryTreeInCpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BinaryTreeInCpp.dir/main.cpp.i"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\School\DataStructure\Chapter6\BinaryTreeInCpp\main.cpp > CMakeFiles\BinaryTreeInCpp.dir\main.cpp.i

CMakeFiles/BinaryTreeInCpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BinaryTreeInCpp.dir/main.cpp.s"
	C:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\School\DataStructure\Chapter6\BinaryTreeInCpp\main.cpp -o CMakeFiles\BinaryTreeInCpp.dir\main.cpp.s

# Object files for target BinaryTreeInCpp
BinaryTreeInCpp_OBJECTS = \
"CMakeFiles/BinaryTreeInCpp.dir/main.cpp.obj"

# External object files for target BinaryTreeInCpp
BinaryTreeInCpp_EXTERNAL_OBJECTS =

BinaryTreeInCpp.exe: CMakeFiles/BinaryTreeInCpp.dir/main.cpp.obj
BinaryTreeInCpp.exe: CMakeFiles/BinaryTreeInCpp.dir/build.make
BinaryTreeInCpp.exe: CMakeFiles/BinaryTreeInCpp.dir/linklibs.rsp
BinaryTreeInCpp.exe: CMakeFiles/BinaryTreeInCpp.dir/objects1.rsp
BinaryTreeInCpp.exe: CMakeFiles/BinaryTreeInCpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\School\DataStructure\Chapter6\BinaryTreeInCpp\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BinaryTreeInCpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BinaryTreeInCpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryTreeInCpp.dir/build: BinaryTreeInCpp.exe

.PHONY : CMakeFiles/BinaryTreeInCpp.dir/build

CMakeFiles/BinaryTreeInCpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BinaryTreeInCpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BinaryTreeInCpp.dir/clean

CMakeFiles/BinaryTreeInCpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\School\DataStructure\Chapter6\BinaryTreeInCpp D:\School\DataStructure\Chapter6\BinaryTreeInCpp D:\School\DataStructure\Chapter6\BinaryTreeInCpp\cmake-build-debug-mingw D:\School\DataStructure\Chapter6\BinaryTreeInCpp\cmake-build-debug-mingw D:\School\DataStructure\Chapter6\BinaryTreeInCpp\cmake-build-debug-mingw\CMakeFiles\BinaryTreeInCpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BinaryTreeInCpp.dir/depend

