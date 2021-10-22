cmake_minimum_required(VERSION 3.10)

project(
  Ants
  VERSION 0.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories("./include/")

add_executable(Ants 
  ./src/main.cpp
  ./src/ants/ant.cpp
  ./src/ants/scavenger_ant.cpp)

# Doxygen documentation
add_custom_target(
  Docs ALL
  COMMAND cp ${CMAKE_CURRENT_SOURCE_DIR}/docs/Doxyfile ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND echo "OUTPUT_DIRECTORY=${CMAKE_CURRENT_SOURCE_DIR}/docs" >> ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND echo "INPUT=${CMAKE_CURRENT_SOURCE_DIR}/src" >> ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND echo "INPUT+=${CMAKE_CURRENT_SOURCE_DIR}/include" >> ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND doxygen ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp
  COMMAND rm ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.temp)
