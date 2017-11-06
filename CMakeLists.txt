cmake_minimum_required(VERSION 3.6)
project(CPPLectures)

set(CMAKE_CXX_STANDARD 11)

set(TP1_FILES tp1.cpp)
add_executable(TP1 ${TP1_FILES})

set(TP2_FILES Shape.cpp Circle.cpp Shape.h Circle.h tp2.cpp Square.cpp Square.h MotorThings/Engine.cpp MotorThings/Engine.h MotorThings/Vehicle.h MotorThings/MotorVehicle.cpp MotorThings/MotorVehicle.h MotorThings/TwoWheelVehicle.h MotorThings/Motorcycle.cpp MotorThings/Motorcycle.h)
add_executable(TP2 ${TP2_FILES})