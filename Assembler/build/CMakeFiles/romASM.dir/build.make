# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build

# Include any dependencies generated for this target.
include CMakeFiles/romASM.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/romASM.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/romASM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/romASM.dir/flags.make

antlr4cpp_generated_src/romASMLexer/romASMLexer.interp: /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/romASMLexer.g4
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building romASMLexer with ANTLR 4.13.2"
	cd /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler && "/c/Program Files/Common Files/Oracle/Java/javapath/java.exe" -jar C:/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/antlr-4.13.2-complete.jar romASMLexer.g4 -o /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMLexer -no-listener -Dlanguage=Cpp -package romASM

antlr4cpp_generated_src/romASMLexer/romASMLexer.tokens: antlr4cpp_generated_src/romASMLexer/romASMLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/romASMLexer/romASMLexer.tokens

antlr4cpp_generated_src/romASMLexer/romASMLexer.h: antlr4cpp_generated_src/romASMLexer/romASMLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/romASMLexer/romASMLexer.h

antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp: antlr4cpp_generated_src/romASMLexer/romASMLexer.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp

antlr4cpp_generated_src/romASMParser/romASMParser.interp: /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/romASMParser.g4
antlr4cpp_generated_src/romASMParser/romASMParser.interp: /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/romASMLexer.g4
antlr4cpp_generated_src/romASMParser/romASMParser.interp: antlr4cpp_generated_src/romASMLexer/romASMLexer.interp
antlr4cpp_generated_src/romASMParser/romASMParser.interp: antlr4cpp_generated_src/romASMLexer/romASMLexer.tokens
antlr4cpp_generated_src/romASMParser/romASMParser.interp: antlr4cpp_generated_src/romASMLexer/romASMLexer.h
antlr4cpp_generated_src/romASMParser/romASMParser.interp: antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building romASMParser with ANTLR 4.13.2"
	cd /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler && "/c/Program Files/Common Files/Oracle/Java/javapath/java.exe" -jar C:/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/antlr-4.13.2-complete.jar romASMParser.g4 -o /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMParser -no-listener -Dlanguage=Cpp -lib /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMLexer -listener -package romASM

antlr4cpp_generated_src/romASMParser/romASMParser.tokens: antlr4cpp_generated_src/romASMParser/romASMParser.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/romASMParser/romASMParser.tokens

antlr4cpp_generated_src/romASMParser/romASMParser.h: antlr4cpp_generated_src/romASMParser/romASMParser.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/romASMParser/romASMParser.h

antlr4cpp_generated_src/romASMParser/romASMParser.cpp: antlr4cpp_generated_src/romASMParser/romASMParser.interp
	@$(CMAKE_COMMAND) -E touch_nocreate antlr4cpp_generated_src/romASMParser/romASMParser.cpp

CMakeFiles/romASM.dir/main.cpp.o: CMakeFiles/romASM.dir/flags.make
CMakeFiles/romASM.dir/main.cpp.o: /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/main.cpp
CMakeFiles/romASM.dir/main.cpp.o: CMakeFiles/romASM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/romASM.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/romASM.dir/main.cpp.o -MF CMakeFiles/romASM.dir/main.cpp.o.d -o CMakeFiles/romASM.dir/main.cpp.o -c /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/main.cpp

CMakeFiles/romASM.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/romASM.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/main.cpp > CMakeFiles/romASM.dir/main.cpp.i

CMakeFiles/romASM.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/romASM.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/main.cpp -o CMakeFiles/romASM.dir/main.cpp.s

CMakeFiles/romASM.dir/Listener.cpp.o: CMakeFiles/romASM.dir/flags.make
CMakeFiles/romASM.dir/Listener.cpp.o: /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/Listener.cpp
CMakeFiles/romASM.dir/Listener.cpp.o: CMakeFiles/romASM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/romASM.dir/Listener.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/romASM.dir/Listener.cpp.o -MF CMakeFiles/romASM.dir/Listener.cpp.o.d -o CMakeFiles/romASM.dir/Listener.cpp.o -c /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/Listener.cpp

CMakeFiles/romASM.dir/Listener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/romASM.dir/Listener.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/Listener.cpp > CMakeFiles/romASM.dir/Listener.cpp.i

CMakeFiles/romASM.dir/Listener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/romASM.dir/Listener.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/Listener.cpp -o CMakeFiles/romASM.dir/Listener.cpp.s

CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o: CMakeFiles/romASM.dir/flags.make
CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o: antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp
CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o: CMakeFiles/romASM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o -MF CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o.d -o CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o -c /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp

CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp > CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.i

CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp -o CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.s

CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o: CMakeFiles/romASM.dir/flags.make
CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o: antlr4cpp_generated_src/romASMParser/romASMParser.cpp
CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o: CMakeFiles/romASM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o -MF CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o.d -o CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o -c /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMParser/romASMParser.cpp

CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMParser/romASMParser.cpp > CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.i

CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/antlr4cpp_generated_src/romASMParser/romASMParser.cpp -o CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.s

# Object files for target romASM
romASM_OBJECTS = \
"CMakeFiles/romASM.dir/main.cpp.o" \
"CMakeFiles/romASM.dir/Listener.cpp.o" \
"CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o" \
"CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o"

# External object files for target romASM
romASM_EXTERNAL_OBJECTS =

romASM.exe: CMakeFiles/romASM.dir/main.cpp.o
romASM.exe: CMakeFiles/romASM.dir/Listener.cpp.o
romASM.exe: CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp.o
romASM.exe: CMakeFiles/romASM.dir/antlr4cpp_generated_src/romASMParser/romASMParser.cpp.o
romASM.exe: CMakeFiles/romASM.dir/build.make
romASM.exe: antlr4_runtime/src/antlr4_runtime/runtime/Cpp/runtime/libantlr4-runtime.a
romASM.exe: CMakeFiles/romASM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable romASM.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/romASM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/romASM.dir/build: romASM.exe
.PHONY : CMakeFiles/romASM.dir/build

CMakeFiles/romASM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/romASM.dir/cmake_clean.cmake
.PHONY : CMakeFiles/romASM.dir/clean

CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMLexer/romASMLexer.cpp
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMLexer/romASMLexer.h
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMLexer/romASMLexer.interp
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMLexer/romASMLexer.tokens
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMParser/romASMParser.cpp
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMParser/romASMParser.h
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMParser/romASMParser.interp
CMakeFiles/romASM.dir/depend: antlr4cpp_generated_src/romASMParser/romASMParser.tokens
	cd /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build /c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/build/CMakeFiles/romASM.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/romASM.dir/depend

