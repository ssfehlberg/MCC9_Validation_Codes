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

# Utility rule file for +uboonecode+job+simulationservices_microboone.fcl.

# Include the progress variables for this target.
include uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/progress.make

uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl: uboonecode/job/simulationservices_microboone.fcl


uboonecode/job/simulationservices_microboone.fcl: /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Simulation/simulationservices_microboone.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Simulation/simulationservices_microboone.fcl to /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/job/simulationservices_microboone.fcl"
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/Simulation && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/job
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/Simulation && /cvmfs/larsoft.opensciencegrid.org/products/cmake/v3_10_1/Linux64bit+2.6-2.12/bin/cmake -E copy /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Simulation/simulationservices_microboone.fcl /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/job/simulationservices_microboone.fcl

+uboonecode+job+simulationservices_microboone.fcl: uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl
+uboonecode+job+simulationservices_microboone.fcl: uboonecode/job/simulationservices_microboone.fcl
+uboonecode+job+simulationservices_microboone.fcl: uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/build.make

.PHONY : +uboonecode+job+simulationservices_microboone.fcl

# Rule to build all files generated by this target.
uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/build: +uboonecode+job+simulationservices_microboone.fcl

.PHONY : uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/build

uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/clean:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/Simulation && $(CMAKE_COMMAND) -P CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/cmake_clean.cmake
.PHONY : uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/clean

uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/depend:
	cd /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs /uboone/app/users/sfehlber/CCInclusive_validation_22/srcs/uboonecode/uboone/Simulation /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64 /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/Simulation /uboone/app/users/sfehlber/CCInclusive_validation_22/build_slf6.x86_64/uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : uboonecode/uboone/Simulation/CMakeFiles/+uboonecode+job+simulationservices_microboone.fcl.dir/depend
