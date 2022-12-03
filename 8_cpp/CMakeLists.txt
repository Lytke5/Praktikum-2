cmake_minimum_required(VERSION 3.5)

project(8_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(8_cpp main.cpp)

install(TARGETS 8_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
