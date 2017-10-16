cmake_minimum_required(VERSION 3.6)
project(CPPLectures)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES tp1.cpp Shape.cpp)
add_executable(CPPLectures ${SOURCE_FILES})