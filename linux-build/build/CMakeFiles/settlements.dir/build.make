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
CMAKE_SOURCE_DIR = /home/astra/stc/settlements/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/astra/stc/settlements/linux-build/build

# Include any dependencies generated for this target.
include CMakeFiles/settlements.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/settlements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/settlements.dir/flags.make

CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.o: settlements_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.o -c /home/astra/stc/settlements/linux-build/build/settlements_autogen/mocs_compilation.cpp

CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/linux-build/build/settlements_autogen/mocs_compilation.cpp > CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.i

CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/linux-build/build/settlements_autogen/mocs_compilation.cpp -o CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.s

CMakeFiles/settlements.dir/main.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/main.cpp.o: /home/astra/stc/settlements/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/settlements.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/main.cpp.o -c /home/astra/stc/settlements/src/main.cpp

CMakeFiles/settlements.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/main.cpp > CMakeFiles/settlements.dir/main.cpp.i

CMakeFiles/settlements.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/main.cpp -o CMakeFiles/settlements.dir/main.cpp.s

CMakeFiles/settlements.dir/mainwindow.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/mainwindow.cpp.o: /home/astra/stc/settlements/src/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/settlements.dir/mainwindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/mainwindow.cpp.o -c /home/astra/stc/settlements/src/mainwindow.cpp

CMakeFiles/settlements.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/mainwindow.cpp > CMakeFiles/settlements.dir/mainwindow.cpp.i

CMakeFiles/settlements.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/mainwindow.cpp -o CMakeFiles/settlements.dir/mainwindow.cpp.s

CMakeFiles/settlements.dir/db/citiesrepository.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/db/citiesrepository.cpp.o: /home/astra/stc/settlements/src/db/citiesrepository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/settlements.dir/db/citiesrepository.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/db/citiesrepository.cpp.o -c /home/astra/stc/settlements/src/db/citiesrepository.cpp

CMakeFiles/settlements.dir/db/citiesrepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/db/citiesrepository.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/db/citiesrepository.cpp > CMakeFiles/settlements.dir/db/citiesrepository.cpp.i

CMakeFiles/settlements.dir/db/citiesrepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/db/citiesrepository.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/db/citiesrepository.cpp -o CMakeFiles/settlements.dir/db/citiesrepository.cpp.s

CMakeFiles/settlements.dir/entity/city.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/entity/city.cpp.o: /home/astra/stc/settlements/src/entity/city.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/settlements.dir/entity/city.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/entity/city.cpp.o -c /home/astra/stc/settlements/src/entity/city.cpp

CMakeFiles/settlements.dir/entity/city.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/entity/city.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/entity/city.cpp > CMakeFiles/settlements.dir/entity/city.cpp.i

CMakeFiles/settlements.dir/entity/city.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/entity/city.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/entity/city.cpp -o CMakeFiles/settlements.dir/entity/city.cpp.s

CMakeFiles/settlements.dir/model/citiestablemodel.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/model/citiestablemodel.cpp.o: /home/astra/stc/settlements/src/model/citiestablemodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/settlements.dir/model/citiestablemodel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/model/citiestablemodel.cpp.o -c /home/astra/stc/settlements/src/model/citiestablemodel.cpp

CMakeFiles/settlements.dir/model/citiestablemodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/model/citiestablemodel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/model/citiestablemodel.cpp > CMakeFiles/settlements.dir/model/citiestablemodel.cpp.i

CMakeFiles/settlements.dir/model/citiestablemodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/model/citiestablemodel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/model/citiestablemodel.cpp -o CMakeFiles/settlements.dir/model/citiestablemodel.cpp.s

CMakeFiles/settlements.dir/dialog/editdialog.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/dialog/editdialog.cpp.o: /home/astra/stc/settlements/src/dialog/editdialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/settlements.dir/dialog/editdialog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/dialog/editdialog.cpp.o -c /home/astra/stc/settlements/src/dialog/editdialog.cpp

CMakeFiles/settlements.dir/dialog/editdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/dialog/editdialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/dialog/editdialog.cpp > CMakeFiles/settlements.dir/dialog/editdialog.cpp.i

CMakeFiles/settlements.dir/dialog/editdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/dialog/editdialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/dialog/editdialog.cpp -o CMakeFiles/settlements.dir/dialog/editdialog.cpp.s

CMakeFiles/settlements.dir/entity/type.cpp.o: CMakeFiles/settlements.dir/flags.make
CMakeFiles/settlements.dir/entity/type.cpp.o: /home/astra/stc/settlements/src/entity/type.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/settlements.dir/entity/type.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/settlements.dir/entity/type.cpp.o -c /home/astra/stc/settlements/src/entity/type.cpp

CMakeFiles/settlements.dir/entity/type.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/settlements.dir/entity/type.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/astra/stc/settlements/src/entity/type.cpp > CMakeFiles/settlements.dir/entity/type.cpp.i

CMakeFiles/settlements.dir/entity/type.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/settlements.dir/entity/type.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/astra/stc/settlements/src/entity/type.cpp -o CMakeFiles/settlements.dir/entity/type.cpp.s

# Object files for target settlements
settlements_OBJECTS = \
"CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/settlements.dir/main.cpp.o" \
"CMakeFiles/settlements.dir/mainwindow.cpp.o" \
"CMakeFiles/settlements.dir/db/citiesrepository.cpp.o" \
"CMakeFiles/settlements.dir/entity/city.cpp.o" \
"CMakeFiles/settlements.dir/model/citiestablemodel.cpp.o" \
"CMakeFiles/settlements.dir/dialog/editdialog.cpp.o" \
"CMakeFiles/settlements.dir/entity/type.cpp.o"

# External object files for target settlements
settlements_EXTERNAL_OBJECTS =

settlements: CMakeFiles/settlements.dir/settlements_autogen/mocs_compilation.cpp.o
settlements: CMakeFiles/settlements.dir/main.cpp.o
settlements: CMakeFiles/settlements.dir/mainwindow.cpp.o
settlements: CMakeFiles/settlements.dir/db/citiesrepository.cpp.o
settlements: CMakeFiles/settlements.dir/entity/city.cpp.o
settlements: CMakeFiles/settlements.dir/model/citiestablemodel.cpp.o
settlements: CMakeFiles/settlements.dir/dialog/editdialog.cpp.o
settlements: CMakeFiles/settlements.dir/entity/type.cpp.o
settlements: CMakeFiles/settlements.dir/build.make
settlements: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.2
settlements: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.15.2
settlements: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
settlements: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
settlements: CMakeFiles/settlements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/astra/stc/settlements/linux-build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable settlements"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/settlements.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/settlements.dir/build: settlements

.PHONY : CMakeFiles/settlements.dir/build

CMakeFiles/settlements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/settlements.dir/cmake_clean.cmake
.PHONY : CMakeFiles/settlements.dir/clean

CMakeFiles/settlements.dir/depend:
	cd /home/astra/stc/settlements/linux-build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/astra/stc/settlements/src /home/astra/stc/settlements/src /home/astra/stc/settlements/linux-build/build /home/astra/stc/settlements/linux-build/build /home/astra/stc/settlements/linux-build/build/CMakeFiles/settlements.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/settlements.dir/depend

