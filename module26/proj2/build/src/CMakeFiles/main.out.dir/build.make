# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/obewan/SkillBoxCplus/module26/proj2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/obewan/SkillBoxCplus/module26/proj2/build

# Include any dependencies generated for this target.
include src/CMakeFiles/main.out.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/main.out.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/main.out.dir/flags.make

src/CMakeFiles/main.out.dir/main.cpp.o: src/CMakeFiles/main.out.dir/flags.make
src/CMakeFiles/main.out.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obewan/SkillBoxCplus/module26/proj2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/main.out.dir/main.cpp.o"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/main.cpp.o -c /home/obewan/SkillBoxCplus/module26/proj2/src/main.cpp

src/CMakeFiles/main.out.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/main.cpp.i"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obewan/SkillBoxCplus/module26/proj2/src/main.cpp > CMakeFiles/main.out.dir/main.cpp.i

src/CMakeFiles/main.out.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/main.cpp.s"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obewan/SkillBoxCplus/module26/proj2/src/main.cpp -o CMakeFiles/main.out.dir/main.cpp.s

src/CMakeFiles/main.out.dir/addressBook.cpp.o: src/CMakeFiles/main.out.dir/flags.make
src/CMakeFiles/main.out.dir/addressBook.cpp.o: ../src/addressBook.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obewan/SkillBoxCplus/module26/proj2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/main.out.dir/addressBook.cpp.o"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/addressBook.cpp.o -c /home/obewan/SkillBoxCplus/module26/proj2/src/addressBook.cpp

src/CMakeFiles/main.out.dir/addressBook.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/addressBook.cpp.i"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obewan/SkillBoxCplus/module26/proj2/src/addressBook.cpp > CMakeFiles/main.out.dir/addressBook.cpp.i

src/CMakeFiles/main.out.dir/addressBook.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/addressBook.cpp.s"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obewan/SkillBoxCplus/module26/proj2/src/addressBook.cpp -o CMakeFiles/main.out.dir/addressBook.cpp.s

src/CMakeFiles/main.out.dir/contact.cpp.o: src/CMakeFiles/main.out.dir/flags.make
src/CMakeFiles/main.out.dir/contact.cpp.o: ../src/contact.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obewan/SkillBoxCplus/module26/proj2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/main.out.dir/contact.cpp.o"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/contact.cpp.o -c /home/obewan/SkillBoxCplus/module26/proj2/src/contact.cpp

src/CMakeFiles/main.out.dir/contact.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/contact.cpp.i"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obewan/SkillBoxCplus/module26/proj2/src/contact.cpp > CMakeFiles/main.out.dir/contact.cpp.i

src/CMakeFiles/main.out.dir/contact.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/contact.cpp.s"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obewan/SkillBoxCplus/module26/proj2/src/contact.cpp -o CMakeFiles/main.out.dir/contact.cpp.s

src/CMakeFiles/main.out.dir/phone.cpp.o: src/CMakeFiles/main.out.dir/flags.make
src/CMakeFiles/main.out.dir/phone.cpp.o: ../src/phone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/obewan/SkillBoxCplus/module26/proj2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/main.out.dir/phone.cpp.o"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/phone.cpp.o -c /home/obewan/SkillBoxCplus/module26/proj2/src/phone.cpp

src/CMakeFiles/main.out.dir/phone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/phone.cpp.i"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/obewan/SkillBoxCplus/module26/proj2/src/phone.cpp > CMakeFiles/main.out.dir/phone.cpp.i

src/CMakeFiles/main.out.dir/phone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/phone.cpp.s"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/obewan/SkillBoxCplus/module26/proj2/src/phone.cpp -o CMakeFiles/main.out.dir/phone.cpp.s

# Object files for target main.out
main_out_OBJECTS = \
"CMakeFiles/main.out.dir/main.cpp.o" \
"CMakeFiles/main.out.dir/addressBook.cpp.o" \
"CMakeFiles/main.out.dir/contact.cpp.o" \
"CMakeFiles/main.out.dir/phone.cpp.o"

# External object files for target main.out
main_out_EXTERNAL_OBJECTS =

src/main.out: src/CMakeFiles/main.out.dir/main.cpp.o
src/main.out: src/CMakeFiles/main.out.dir/addressBook.cpp.o
src/main.out: src/CMakeFiles/main.out.dir/contact.cpp.o
src/main.out: src/CMakeFiles/main.out.dir/phone.cpp.o
src/main.out: src/CMakeFiles/main.out.dir/build.make
src/main.out: src/CMakeFiles/main.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/obewan/SkillBoxCplus/module26/proj2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable main.out"
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/main.out.dir/build: src/main.out

.PHONY : src/CMakeFiles/main.out.dir/build

src/CMakeFiles/main.out.dir/clean:
	cd /home/obewan/SkillBoxCplus/module26/proj2/build/src && $(CMAKE_COMMAND) -P CMakeFiles/main.out.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/main.out.dir/clean

src/CMakeFiles/main.out.dir/depend:
	cd /home/obewan/SkillBoxCplus/module26/proj2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/obewan/SkillBoxCplus/module26/proj2 /home/obewan/SkillBoxCplus/module26/proj2/src /home/obewan/SkillBoxCplus/module26/proj2/build /home/obewan/SkillBoxCplus/module26/proj2/build/src /home/obewan/SkillBoxCplus/module26/proj2/build/src/CMakeFiles/main.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/main.out.dir/depend
