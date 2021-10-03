cmake_minimum_required(VERSION 3.10)

project(
  Ants
  VERSION 0.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories("./include/")

add_executable(Ants ./src/main.cpp)
