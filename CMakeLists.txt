# Minimum version of CMAKE to use
cmake_minimum_required(VERSION 3.10)

project(
  Ants            # Name of our project
  VERSION 0.0     # Project version
  LANGUAGES CXX)  # Project language

# Language standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories("/usr/include/")
include_directories("./include/")

# Libraries directories
link_directories("/usr/lib/x86_64-linux-gnu/")

# Compiler flags
add_compile_options(
  "-Wall" "-Wpedantic" "-Wextra" "-fexceptions")

# Executable application
add_executable(
  Ants
  ./src/main.cpp
  ./src/ants/ant.cpp
  ./src/ants/scavenger_ant.cpp)

# Doxygen documentation
add_custom_target(
  Docs
  COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/docs/Doxyfile ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND echo "OUTPUT_DIRECTORY=${CMAKE_CURRENT_SOURCE_DIR}/docs" >> ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND echo "INPUT=${CMAKE_CURRENT_SOURCE_DIR}/src" >> ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND echo "INPUT+=${CMAKE_CURRENT_SOURCE_DIR}/include" >> ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND doxygen ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND rm ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp)
