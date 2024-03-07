cmake_minimum_required(VERSION 3.10)
project(stdxc++)

add_library(${PROJECT_NAME} SHARED 
${CMAKE_SOURCE_DIR}/execption/io_exception.cpp

)