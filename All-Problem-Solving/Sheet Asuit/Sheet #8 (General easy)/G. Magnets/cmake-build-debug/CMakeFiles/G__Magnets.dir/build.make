# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\C Partition\clion\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\C Partition\clion\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/G__Magnets.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/G__Magnets.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/G__Magnets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/G__Magnets.dir/flags.make

CMakeFiles/G__Magnets.dir/main.cpp.obj: CMakeFiles/G__Magnets.dir/flags.make
CMakeFiles/G__Magnets.dir/main.cpp.obj: D:/C\ Partition/Clion-Projects/Sheet\ \#8\ (General\ easy)/G.\ Magnets/main.cpp
CMakeFiles/G__Magnets.dir/main.cpp.obj: CMakeFiles/G__Magnets.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/G__Magnets.dir/main.cpp.obj"
	"D:\C Partition\clion\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/G__Magnets.dir/main.cpp.obj -MF CMakeFiles\G__Magnets.dir\main.cpp.obj.d -o CMakeFiles\G__Magnets.dir\main.cpp.obj -c "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\main.cpp"

CMakeFiles/G__Magnets.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/G__Magnets.dir/main.cpp.i"
	"D:\C Partition\clion\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\main.cpp" > CMakeFiles\G__Magnets.dir\main.cpp.i

CMakeFiles/G__Magnets.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/G__Magnets.dir/main.cpp.s"
	"D:\C Partition\clion\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\main.cpp" -o CMakeFiles\G__Magnets.dir\main.cpp.s

# Object files for target G__Magnets
G__Magnets_OBJECTS = \
"CMakeFiles/G__Magnets.dir/main.cpp.obj"

# External object files for target G__Magnets
G__Magnets_EXTERNAL_OBJECTS =

G__Magnets.exe: CMakeFiles/G__Magnets.dir/main.cpp.obj
G__Magnets.exe: CMakeFiles/G__Magnets.dir/build.make
G__Magnets.exe: CMakeFiles/G__Magnets.dir/linkLibs.rsp
G__Magnets.exe: CMakeFiles/G__Magnets.dir/objects1.rsp
G__Magnets.exe: CMakeFiles/G__Magnets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable G__Magnets.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\G__Magnets.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/G__Magnets.dir/build: G__Magnets.exe
.PHONY : CMakeFiles/G__Magnets.dir/build

CMakeFiles/G__Magnets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\G__Magnets.dir\cmake_clean.cmake
.PHONY : CMakeFiles/G__Magnets.dir/clean

CMakeFiles/G__Magnets.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets" "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets" "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\cmake-build-debug" "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\cmake-build-debug" "D:\C Partition\Clion-Projects\Sheet #8 (General easy)\G. Magnets\cmake-build-debug\CMakeFiles\G__Magnets.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/G__Magnets.dir/depend

