cmake_minimum_required(VERSION 3.10)
project(stdxc++)

add_library(${PROJECT_NAME} SHARED 
execption/io_exception.cpp
src/string.cpp

)