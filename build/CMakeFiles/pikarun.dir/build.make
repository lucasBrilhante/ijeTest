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
include CMakeFiles/pikarun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pikarun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pikarun.dir/flags.make

CMakeFiles/pikarun.dir/src/main.cpp.o: CMakeFiles/pikarun.dir/flags.make
CMakeFiles/pikarun.dir/src/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/pikarun.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pikarun.dir/src/main.cpp.o -c /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/main.cpp

CMakeFiles/pikarun.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pikarun.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/main.cpp > CMakeFiles/pikarun.dir/src/main.cpp.i

CMakeFiles/pikarun.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pikarun.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/main.cpp -o CMakeFiles/pikarun.dir/src/main.cpp.s

CMakeFiles/pikarun.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/pikarun.dir/src/main.cpp.o.requires

CMakeFiles/pikarun.dir/src/main.cpp.o.provides: CMakeFiles/pikarun.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/pikarun.dir/build.make CMakeFiles/pikarun.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/pikarun.dir/src/main.cpp.o.provides

CMakeFiles/pikarun.dir/src/main.cpp.o.provides.build: CMakeFiles/pikarun.dir/src/main.cpp.o

CMakeFiles/pikarun.dir/src/GameScene.cpp.o: CMakeFiles/pikarun.dir/flags.make
CMakeFiles/pikarun.dir/src/GameScene.cpp.o: ../src/GameScene.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/pikarun.dir/src/GameScene.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/pikarun.dir/src/GameScene.cpp.o -c /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/GameScene.cpp

CMakeFiles/pikarun.dir/src/GameScene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pikarun.dir/src/GameScene.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/GameScene.cpp > CMakeFiles/pikarun.dir/src/GameScene.cpp.i

CMakeFiles/pikarun.dir/src/GameScene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pikarun.dir/src/GameScene.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lucas/git/Jogos2017/sdl2/exemploLivro/src/GameScene.cpp -o CMakeFiles/pikarun.dir/src/GameScene.cpp.s

CMakeFiles/pikarun.dir/src/GameScene.cpp.o.requires:
.PHONY : CMakeFiles/pikarun.dir/src/GameScene.cpp.o.requires

CMakeFiles/pikarun.dir/src/GameScene.cpp.o.provides: CMakeFiles/pikarun.dir/src/GameScene.cpp.o.requires
	$(MAKE) -f CMakeFiles/pikarun.dir/build.make CMakeFiles/pikarun.dir/src/GameScene.cpp.o.provides.build
.PHONY : CMakeFiles/pikarun.dir/src/GameScene.cpp.o.provides

CMakeFiles/pikarun.dir/src/GameScene.cpp.o.provides.build: CMakeFiles/pikarun.dir/src/GameScene.cpp.o

# Object files for target pikarun
pikarun_OBJECTS = \
"CMakeFiles/pikarun.dir/src/main.cpp.o" \
"CMakeFiles/pikarun.dir/src/GameScene.cpp.o"

# External object files for target pikarun
pikarun_EXTERNAL_OBJECTS =

pikarun: CMakeFiles/pikarun.dir/src/main.cpp.o
pikarun: CMakeFiles/pikarun.dir/src/GameScene.cpp.o
pikarun: CMakeFiles/pikarun.dir/build.make
pikarun: engine/libengine.a
pikarun: CMakeFiles/pikarun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable pikarun"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pikarun.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy_directory /home/lucas/git/Jogos2017/sdl2/exemploLivro/assets /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/assets

# Rule to build all files generated by this target.
CMakeFiles/pikarun.dir/build: pikarun
.PHONY : CMakeFiles/pikarun.dir/build

CMakeFiles/pikarun.dir/requires: CMakeFiles/pikarun.dir/src/main.cpp.o.requires
CMakeFiles/pikarun.dir/requires: CMakeFiles/pikarun.dir/src/GameScene.cpp.o.requires
.PHONY : CMakeFiles/pikarun.dir/requires

CMakeFiles/pikarun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pikarun.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pikarun.dir/clean

CMakeFiles/pikarun.dir/depend:
	cd /home/lucas/git/Jogos2017/sdl2/exemploLivro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucas/git/Jogos2017/sdl2/exemploLivro /home/lucas/git/Jogos2017/sdl2/exemploLivro /home/lucas/git/Jogos2017/sdl2/exemploLivro/build /home/lucas/git/Jogos2017/sdl2/exemploLivro/build /home/lucas/git/Jogos2017/sdl2/exemploLivro/build/CMakeFiles/pikarun.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pikarun.dir/depend

