cmake_minimum_required(VERSION 3.8)
project(CppTemplate)

set(CMAKE_CXX_STANDARD 17)
add_definitions(-DANDREIKKAA)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES main.cpp bits/stdc++.h)
add_executable(CppTemplate.exe ${SOURCE_FILES})