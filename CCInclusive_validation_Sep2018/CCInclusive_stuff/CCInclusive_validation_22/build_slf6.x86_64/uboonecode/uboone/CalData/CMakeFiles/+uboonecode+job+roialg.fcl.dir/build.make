# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake

# The command to remove a file.
RM = /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64

# Utility rule file for +uboonecode+job+roialg.fcl.

# Include the progress variables for this target.
include uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/progress.make

uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl: uboonecode/job/roialg.fcl


uboonecode/job/roialg.fcl: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/CalData/roialg.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/CalData/roialg.fcl to /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/job/roialg.fcl"
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/CalData && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/job
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/CalData && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E copy /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/CalData/roialg.fcl /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/job/roialg.fcl

+uboonecode+job+roialg.fcl: uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl
+uboonecode+job+roialg.fcl: uboonecode/job/roialg.fcl
+uboonecode+job+roialg.fcl: uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/build.make

.PHONY : +uboonecode+job+roialg.fcl

# Rule to build all files generated by this target.
uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/build: +uboonecode+job+roialg.fcl

.PHONY : uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/build

uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/clean:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/CalData && $(CMAKE_COMMAND) -P CMakeFiles/+uboonecode+job+roialg.fcl.dir/cmake_clean.cmake
.PHONY : uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/clean

uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/depend:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/CalData /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64 /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/CalData /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : uboonecode/uboone/CalData/CMakeFiles/+uboonecode+job+roialg.fcl.dir/depend
