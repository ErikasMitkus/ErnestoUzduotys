cmake_minimum_required(VERSION 3.6)
project(ErnestoUzduotys)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES pirma/main.cpp)
add_executable(ErnestoUzduotys ${SOURCE_FILES})