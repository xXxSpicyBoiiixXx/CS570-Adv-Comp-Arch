# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm

# Utility rule file for rmc.ko.

# Include the progress variables for this target.
include CMakeFiles/rmc.ko.dir/progress.make

CMakeFiles/rmc.ko:
	cd /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm/softrmc_driver && make

rmc.ko: CMakeFiles/rmc.ko
rmc.ko: CMakeFiles/rmc.ko.dir/build.make
	/usr/bin/cmake -E copy /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm/softrmc_driver/rmc.ko /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm/build
.PHONY : rmc.ko

# Rule to build all files generated by this target.
CMakeFiles/rmc.ko.dir/build: rmc.ko

.PHONY : CMakeFiles/rmc.ko.dir/build

CMakeFiles/rmc.ko.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rmc.ko.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rmc.ko.dir/clean

CMakeFiles/rmc.ko.dir/depend:
	cd /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm /home/debian/CS570-Adv-Comp-Arch/Projects/final-project/sonuma-vm/CMakeFiles/rmc.ko.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rmc.ko.dir/depend

