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
CMAKE_SOURCE_DIR = /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64

# Utility rule file for +uboonecode+job+prodgenie_uboone.fcl.

# Include the progress variables for this target.
include uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/progress.make

uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl: uboonecode/job/prodgenie_uboone.fcl


uboonecode/job/prodgenie_uboone.fcl: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/EventGenerator/prodgenie_uboone.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/EventGenerator/prodgenie_uboone.fcl to /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/job/prodgenie_uboone.fcl"
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/EventGenerator && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/job
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/EventGenerator && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E copy /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/EventGenerator/prodgenie_uboone.fcl /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/job/prodgenie_uboone.fcl

+uboonecode+job+prodgenie_uboone.fcl: uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl
+uboonecode+job+prodgenie_uboone.fcl: uboonecode/job/prodgenie_uboone.fcl
+uboonecode+job+prodgenie_uboone.fcl: uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/build.make

.PHONY : +uboonecode+job+prodgenie_uboone.fcl

# Rule to build all files generated by this target.
uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/build: +uboonecode+job+prodgenie_uboone.fcl

.PHONY : uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/build

uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/clean:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/EventGenerator && $(CMAKE_COMMAND) -P CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/cmake_clean.cmake
.PHONY : uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/clean

uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/depend:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/EventGenerator /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64 /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/EventGenerator /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : uboonecode/uboone/EventGenerator/CMakeFiles/+uboonecode+job+prodgenie_uboone.fcl.dir/depend

