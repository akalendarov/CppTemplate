cmake_minimum_required(VERSION 3.2)
project(__Template_cpp__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

add_definitions(-DANDREIKKAA)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES main.cpp)

add_executable(__Template_cpp__ ${SOURCE_FILES})
