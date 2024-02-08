cmake_minimum_required(VERSION 3.5)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

project(taskA)

project(taskB)

project(taskC)

project(taskD)

project(taskE)

project(taskF)

add_executable(taskA taskA/main.cpp)

add_executable(taskB taskB/main.cpp)

add_executable(taskC taskC/main.cpp)

add_executable(taskD taskD/main.cpp)

add_executable(taskE taskE/main.cpp)

add_executable(taskF taskF/main.cpp)


