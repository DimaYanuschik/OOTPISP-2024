cmake_minimum_required(VERSION 3.15.0)

project(lab1_220227)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)



set(SOURCE_FILES  Main.cpp
                Source.cpp)

set(HEADER_FILES Header.h)

set(ALL_SOURCES ${HEADER_FILES}
                ${SOURCE_FILES})


add_executable(${PROJECT_NAME} ${ALL_SOURCES})
