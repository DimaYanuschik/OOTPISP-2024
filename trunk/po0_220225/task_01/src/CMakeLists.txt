cmake_minimum_required(VERSION 3.15.0)

project(LAB_01_220225)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(SOURCE_FILES  ОТИС.cpp
                Manufactory.cpp)

set(HEADER_FILES Manufactory.h)

set(ALL_SOURCES ${HEADER_FILES}
                ${SOURCE_FILES})


add_executable(${PROJECT_NAME} ${ALL_SOURCES})
