# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/McMac/Desktop/Bingo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/McMac/Desktop/Bingo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/Testing/testMain.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/testMain.cpp.o: ../Testing/testMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/Testing/testMain.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/testMain.cpp.o -c /Users/McMac/Desktop/Bingo/Testing/testMain.cpp

CMakeFiles/Test.dir/Testing/testMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/testMain.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Testing/testMain.cpp > CMakeFiles/Test.dir/Testing/testMain.cpp.i

CMakeFiles/Test.dir/Testing/testMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/testMain.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Testing/testMain.cpp -o CMakeFiles/Test.dir/Testing/testMain.cpp.s

CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires

CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides: CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides

CMakeFiles/Test.dir/Testing/testMain.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/testMain.cpp.o


CMakeFiles/Test.dir/UserInterface.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/UserInterface.cpp.o: ../UserInterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Test.dir/UserInterface.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/UserInterface.cpp.o -c /Users/McMac/Desktop/Bingo/UserInterface.cpp

CMakeFiles/Test.dir/UserInterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/UserInterface.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/UserInterface.cpp > CMakeFiles/Test.dir/UserInterface.cpp.i

CMakeFiles/Test.dir/UserInterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/UserInterface.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/UserInterface.cpp -o CMakeFiles/Test.dir/UserInterface.cpp.s

CMakeFiles/Test.dir/UserInterface.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/UserInterface.cpp.o.requires

CMakeFiles/Test.dir/UserInterface.cpp.o.provides: CMakeFiles/Test.dir/UserInterface.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/UserInterface.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/UserInterface.cpp.o.provides

CMakeFiles/Test.dir/UserInterface.cpp.o.provides.build: CMakeFiles/Test.dir/UserInterface.cpp.o


CMakeFiles/Test.dir/Deck.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Deck.cpp.o: ../Deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Test.dir/Deck.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Deck.cpp.o -c /Users/McMac/Desktop/Bingo/Deck.cpp

CMakeFiles/Test.dir/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Deck.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Deck.cpp > CMakeFiles/Test.dir/Deck.cpp.i

CMakeFiles/Test.dir/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Deck.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Deck.cpp -o CMakeFiles/Test.dir/Deck.cpp.s

CMakeFiles/Test.dir/Deck.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Deck.cpp.o.requires

CMakeFiles/Test.dir/Deck.cpp.o.provides: CMakeFiles/Test.dir/Deck.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Deck.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Deck.cpp.o.provides

CMakeFiles/Test.dir/Deck.cpp.o.provides.build: CMakeFiles/Test.dir/Deck.cpp.o


CMakeFiles/Test.dir/Card.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Card.cpp.o: ../Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Test.dir/Card.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Card.cpp.o -c /Users/McMac/Desktop/Bingo/Card.cpp

CMakeFiles/Test.dir/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Card.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Card.cpp > CMakeFiles/Test.dir/Card.cpp.i

CMakeFiles/Test.dir/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Card.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Card.cpp -o CMakeFiles/Test.dir/Card.cpp.s

CMakeFiles/Test.dir/Card.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Card.cpp.o.requires

CMakeFiles/Test.dir/Card.cpp.o.provides: CMakeFiles/Test.dir/Card.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Card.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Card.cpp.o.provides

CMakeFiles/Test.dir/Card.cpp.o.provides.build: CMakeFiles/Test.dir/Card.cpp.o


CMakeFiles/Test.dir/MenuOption.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/MenuOption.cpp.o: ../MenuOption.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Test.dir/MenuOption.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/MenuOption.cpp.o -c /Users/McMac/Desktop/Bingo/MenuOption.cpp

CMakeFiles/Test.dir/MenuOption.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/MenuOption.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/MenuOption.cpp > CMakeFiles/Test.dir/MenuOption.cpp.i

CMakeFiles/Test.dir/MenuOption.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/MenuOption.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/MenuOption.cpp -o CMakeFiles/Test.dir/MenuOption.cpp.s

CMakeFiles/Test.dir/MenuOption.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/MenuOption.cpp.o.requires

CMakeFiles/Test.dir/MenuOption.cpp.o.provides: CMakeFiles/Test.dir/MenuOption.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/MenuOption.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/MenuOption.cpp.o.provides

CMakeFiles/Test.dir/MenuOption.cpp.o.provides.build: CMakeFiles/Test.dir/MenuOption.cpp.o


CMakeFiles/Test.dir/Menu.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Test.dir/Menu.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Menu.cpp.o -c /Users/McMac/Desktop/Bingo/Menu.cpp

CMakeFiles/Test.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Menu.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Menu.cpp > CMakeFiles/Test.dir/Menu.cpp.i

CMakeFiles/Test.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Menu.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Menu.cpp -o CMakeFiles/Test.dir/Menu.cpp.s

CMakeFiles/Test.dir/Menu.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Menu.cpp.o.requires

CMakeFiles/Test.dir/Menu.cpp.o.provides: CMakeFiles/Test.dir/Menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Menu.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Menu.cpp.o.provides

CMakeFiles/Test.dir/Menu.cpp.o.provides.build: CMakeFiles/Test.dir/Menu.cpp.o


CMakeFiles/Test.dir/Testing/MenuTester.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/MenuTester.cpp.o: ../Testing/MenuTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Test.dir/Testing/MenuTester.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/MenuTester.cpp.o -c /Users/McMac/Desktop/Bingo/Testing/MenuTester.cpp

CMakeFiles/Test.dir/Testing/MenuTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/MenuTester.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Testing/MenuTester.cpp > CMakeFiles/Test.dir/Testing/MenuTester.cpp.i

CMakeFiles/Test.dir/Testing/MenuTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/MenuTester.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Testing/MenuTester.cpp -o CMakeFiles/Test.dir/Testing/MenuTester.cpp.s

CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.requires

CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.provides: CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.provides

CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/MenuTester.cpp.o


CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o: ../Testing/MenuOptionTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o -c /Users/McMac/Desktop/Bingo/Testing/MenuOptionTester.cpp

CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Testing/MenuOptionTester.cpp > CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.i

CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Testing/MenuOptionTester.cpp -o CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.s

CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.requires

CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.provides: CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.provides

CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o


CMakeFiles/Test.dir/Testing/CardTester.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/CardTester.cpp.o: ../Testing/CardTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Test.dir/Testing/CardTester.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/CardTester.cpp.o -c /Users/McMac/Desktop/Bingo/Testing/CardTester.cpp

CMakeFiles/Test.dir/Testing/CardTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/CardTester.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Testing/CardTester.cpp > CMakeFiles/Test.dir/Testing/CardTester.cpp.i

CMakeFiles/Test.dir/Testing/CardTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/CardTester.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Testing/CardTester.cpp -o CMakeFiles/Test.dir/Testing/CardTester.cpp.s

CMakeFiles/Test.dir/Testing/CardTester.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/CardTester.cpp.o.requires

CMakeFiles/Test.dir/Testing/CardTester.cpp.o.provides: CMakeFiles/Test.dir/Testing/CardTester.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/CardTester.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/CardTester.cpp.o.provides

CMakeFiles/Test.dir/Testing/CardTester.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/CardTester.cpp.o


CMakeFiles/Test.dir/Testing/DeckTester.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Testing/DeckTester.cpp.o: ../Testing/DeckTester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Test.dir/Testing/DeckTester.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Testing/DeckTester.cpp.o -c /Users/McMac/Desktop/Bingo/Testing/DeckTester.cpp

CMakeFiles/Test.dir/Testing/DeckTester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Testing/DeckTester.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/McMac/Desktop/Bingo/Testing/DeckTester.cpp > CMakeFiles/Test.dir/Testing/DeckTester.cpp.i

CMakeFiles/Test.dir/Testing/DeckTester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Testing/DeckTester.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/McMac/Desktop/Bingo/Testing/DeckTester.cpp -o CMakeFiles/Test.dir/Testing/DeckTester.cpp.s

CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.requires:

.PHONY : CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.requires

CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.provides: CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.requires
	$(MAKE) -f CMakeFiles/Test.dir/build.make CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.provides.build
.PHONY : CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.provides

CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.provides.build: CMakeFiles/Test.dir/Testing/DeckTester.cpp.o


# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/Testing/testMain.cpp.o" \
"CMakeFiles/Test.dir/UserInterface.cpp.o" \
"CMakeFiles/Test.dir/Deck.cpp.o" \
"CMakeFiles/Test.dir/Card.cpp.o" \
"CMakeFiles/Test.dir/MenuOption.cpp.o" \
"CMakeFiles/Test.dir/Menu.cpp.o" \
"CMakeFiles/Test.dir/Testing/MenuTester.cpp.o" \
"CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o" \
"CMakeFiles/Test.dir/Testing/CardTester.cpp.o" \
"CMakeFiles/Test.dir/Testing/DeckTester.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test: CMakeFiles/Test.dir/Testing/testMain.cpp.o
Test: CMakeFiles/Test.dir/UserInterface.cpp.o
Test: CMakeFiles/Test.dir/Deck.cpp.o
Test: CMakeFiles/Test.dir/Card.cpp.o
Test: CMakeFiles/Test.dir/MenuOption.cpp.o
Test: CMakeFiles/Test.dir/Menu.cpp.o
Test: CMakeFiles/Test.dir/Testing/MenuTester.cpp.o
Test: CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o
Test: CMakeFiles/Test.dir/Testing/CardTester.cpp.o
Test: CMakeFiles/Test.dir/Testing/DeckTester.cpp.o
Test: CMakeFiles/Test.dir/build.make
Test: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test

.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/testMain.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/UserInterface.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Deck.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Card.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/MenuOption.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Menu.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/MenuTester.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/MenuOptionTester.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/CardTester.cpp.o.requires
CMakeFiles/Test.dir/requires: CMakeFiles/Test.dir/Testing/DeckTester.cpp.o.requires

.PHONY : CMakeFiles/Test.dir/requires

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	cd /Users/McMac/Desktop/Bingo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/McMac/Desktop/Bingo /Users/McMac/Desktop/Bingo /Users/McMac/Desktop/Bingo/cmake-build-debug /Users/McMac/Desktop/Bingo/cmake-build-debug /Users/McMac/Desktop/Bingo/cmake-build-debug/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

