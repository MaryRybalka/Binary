cmake_minimum_required(VERSION 3.15)
project(Binary)

set(CMAKE_CXX_STANDARD 14)

include_directories(libs)

set(SOURCE_FILES libs/Tasks.cpp)

add_executable(Binary main.cpp libs/Tasks.cpp libs/Tasks.h)