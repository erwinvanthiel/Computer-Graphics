# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Computer_Graphics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Computer_Graphics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Computer_Graphics.dir/flags.make

CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj: CMakeFiles/Computer_Graphics.dir/flags.make
CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj: ../Exercises.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Computer_Graphics.dir\Exercises.cpp.obj -c "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\Exercises.cpp"

CMakeFiles/Computer_Graphics.dir/Exercises.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Computer_Graphics.dir/Exercises.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\Exercises.cpp" > CMakeFiles\Computer_Graphics.dir\Exercises.cpp.i

CMakeFiles/Computer_Graphics.dir/Exercises.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Computer_Graphics.dir/Exercises.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\Exercises.cpp" -o CMakeFiles\Computer_Graphics.dir\Exercises.cpp.s

CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.requires:

.PHONY : CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.requires

CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.provides: CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Computer_Graphics.dir\build.make CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.provides.build
.PHONY : CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.provides

CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.provides.build: CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj


# Object files for target Computer_Graphics
Computer_Graphics_OBJECTS = \
"CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj"

# External object files for target Computer_Graphics
Computer_Graphics_EXTERNAL_OBJECTS =

Computer_Graphics.exe: CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj
Computer_Graphics.exe: CMakeFiles/Computer_Graphics.dir/build.make
Computer_Graphics.exe: CMakeFiles/Computer_Graphics.dir/linklibs.rsp
Computer_Graphics.exe: CMakeFiles/Computer_Graphics.dir/objects1.rsp
Computer_Graphics.exe: CMakeFiles/Computer_Graphics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Computer_Graphics.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Computer_Graphics.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Computer_Graphics.dir/build: Computer_Graphics.exe

.PHONY : CMakeFiles/Computer_Graphics.dir/build

CMakeFiles/Computer_Graphics.dir/requires: CMakeFiles/Computer_Graphics.dir/Exercises.cpp.obj.requires

.PHONY : CMakeFiles/Computer_Graphics.dir/requires

CMakeFiles/Computer_Graphics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Computer_Graphics.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Computer_Graphics.dir/clean

CMakeFiles/Computer_Graphics.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics" "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics" "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\cmake-build-debug" "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\cmake-build-debug" "C:\Users\Erwin\Desktop\Computer Science\Computer Graphics\cmake-build-debug\CMakeFiles\Computer_Graphics.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Computer_Graphics.dir/depend

