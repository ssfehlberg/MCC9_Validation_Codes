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

# Utility rule file for +uboonecode+job+MuCSRecoToMC.fcl.

# Include the progress variables for this target.
include uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/progress.make

uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl: uboonecode/job/MuCSRecoToMC.fcl


uboonecode/job/MuCSRecoToMC.fcl: /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/MuCS/MuCSRecoToMC.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/MuCS/MuCSRecoToMC.fcl to /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/job/MuCSRecoToMC.fcl"
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/MuCS && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/job
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/MuCS && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E copy /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/MuCS/MuCSRecoToMC.fcl /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/job/MuCSRecoToMC.fcl

+uboonecode+job+MuCSRecoToMC.fcl: uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl
+uboonecode+job+MuCSRecoToMC.fcl: uboonecode/job/MuCSRecoToMC.fcl
+uboonecode+job+MuCSRecoToMC.fcl: uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/build.make

.PHONY : +uboonecode+job+MuCSRecoToMC.fcl

# Rule to build all files generated by this target.
uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/build: +uboonecode+job+MuCSRecoToMC.fcl

.PHONY : uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/build

uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/clean:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/MuCS && $(CMAKE_COMMAND) -P CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/cmake_clean.cmake
.PHONY : uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/clean

uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/depend:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs /uboone/app/users/sfehlber/CCInclusive_validation_test/srcs/uboonecode/uboone/MuCS /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64 /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/MuCS /uboone/app/users/sfehlber/CCInclusive_validation_test/build_slf6.x86_64/uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : uboonecode/uboone/MuCS/CMakeFiles/+uboonecode+job+MuCSRecoToMC.fcl.dir/depend

