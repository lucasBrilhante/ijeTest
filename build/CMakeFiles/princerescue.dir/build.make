# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/lucas/git/Jogos2017/sdl2/exemploLivro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucas/git/Jogos2017/sdl2/exemploLivro/build

# Include any dependencies generated for this target.
include CMakeFiles/princerescue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/princerescue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/princerescue.dir/flags.make

CMakeFiles/princerescue.dir/src/main.cpp.o: CMakeFiles/princerescue.dir/flags.make
CMakeFiles/princerescue.dir/src/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/princerescue.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/princerescue.dir/src/main.cpp.o -c /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/main.cpp

CMakeFiles/princerescue.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/princerescue.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/main.cpp > CMakeFiles/princerescue.dir/src/main.cpp.i

CMakeFiles/princerescue.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/princerescue.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/main.cpp -o CMakeFiles/princerescue.dir/src/main.cpp.s

CMakeFiles/princerescue.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/princerescue.dir/src/main.cpp.o.requires

CMakeFiles/princerescue.dir/src/main.cpp.o.provides: CMakeFiles/princerescue.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/princerescue.dir/build.make CMakeFiles/princerescue.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/princerescue.dir/src/main.cpp.o.provides

CMakeFiles/princerescue.dir/src/main.cpp.o.provides.build: CMakeFiles/princerescue.dir/src/main.cpp.o

# Object files for target princerescue
princerescue_OBJECTS = \
"CMakeFiles/princerescue.dir/src/main.cpp.o"

# External object files for target princerescue
princerescue_EXTERNAL_OBJECTS =

princerescue: CMakeFiles/princerescue.dir/src/main.cpp.o
princerescue: CMakeFiles/princerescue.dir/build.make
princerescue: engine/libengine.a
princerescue: CMakeFiles/princerescue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable princerescue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/princerescue.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy_directory /home/lucas/git/Jogos2017/sdl2/exemploLivro/assets /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/assets

# Rule to build all files generated by this target.
CMakeFiles/princerescue.dir/build: princerescue
.PHONY : CMakeFiles/princerescue.dir/build

CMakeFiles/princerescue.dir/requires: CMakeFiles/princerescue.dir/src/main.cpp.o.requires
.PHONY : CMakeFiles/princerescue.dir/requires

CMakeFiles/princerescue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/princerescue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/princerescue.dir/clean

CMakeFiles/princerescue.dir/depend:
	cd /home/lucas/git/Jogos2017/sdl2/exemploLivro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucas/git/Jogos2017/sdl2/exemploLivro /home/lucas/git/Jogos2017/sdl2/exemploLivro /home/lucas/git/Jogos2017/sdl2/exemploLivro/build /home/lucas/git/Jogos2017/sdl2/exemploLivro/build /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/CMakeFiles/princerescue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/princerescue.dir/depend

