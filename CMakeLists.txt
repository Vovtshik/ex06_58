cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(ex06_58 LANGUAGES CXX)

add_executable(ex06_58 ex06_58.cpp)

add_library(mylib lib/ex06_58.h)

target_link_libraries(ex06_58 PUBLIC mylib)

