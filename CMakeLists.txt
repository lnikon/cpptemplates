cmake_minimum_required(VERSION 3.11)
project(cpptemplates)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

include_directories("./include")

set (SOURCES
    src/main.cpp
    )

add_executable(cpptemplates ${SOURCES})
