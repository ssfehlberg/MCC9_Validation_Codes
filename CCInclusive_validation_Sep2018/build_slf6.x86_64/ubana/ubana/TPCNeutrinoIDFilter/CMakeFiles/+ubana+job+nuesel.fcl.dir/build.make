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
CMAKE_SOURCE_DIR = /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64

# Utility rule file for +ubana+job+nuesel.fcl.

# Include the progress variables for this target.
include ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/progress.make

ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl: ubana/job/nuesel.fcl


ubana/job/nuesel.fcl: /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/TPCNeutrinoIDFilter/nuesel.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/TPCNeutrinoIDFilter/nuesel.fcl to /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/job/nuesel.fcl"
	cd /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/TPCNeutrinoIDFilter && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/job
	cd /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/TPCNeutrinoIDFilter && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E copy /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/TPCNeutrinoIDFilter/nuesel.fcl /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/job/nuesel.fcl

+ubana+job+nuesel.fcl: ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl
+ubana+job+nuesel.fcl: ubana/job/nuesel.fcl
+ubana+job+nuesel.fcl: ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/build.make

.PHONY : +ubana+job+nuesel.fcl

# Rule to build all files generated by this target.
ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/build: +ubana+job+nuesel.fcl

.PHONY : ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/build

ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/clean:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/TPCNeutrinoIDFilter && $(CMAKE_COMMAND) -P CMakeFiles/+ubana+job+nuesel.fcl.dir/cmake_clean.cmake
.PHONY : ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/clean

ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/depend:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/srcs/ubana/ubana/TPCNeutrinoIDFilter /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64 /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/TPCNeutrinoIDFilter /uboone/app/users/sfehlber/CCInclusive_validation_Sep2018/build_slf6.x86_64/ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ubana/ubana/TPCNeutrinoIDFilter/CMakeFiles/+ubana+job+nuesel.fcl.dir/depend

