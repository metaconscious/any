cmake_minimum_required(VERSION 3.24)
project(any LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_EXTENSIONS off)

add_subdirectory(any)

if (BUILD_EXAMPLES)
    add_subdirectory(examples)
endif ()
