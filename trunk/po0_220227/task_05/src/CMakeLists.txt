cmake_minimum_required(VERSION 3.15.0)

project(LAB_05_220227)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp Pair.cpp)

set(HEADER_FILES Pair.h List.h PQueue.h)

set(ALL_SOURCES ${HEADER_FILSE}
				${SOURCE_FILES})

add_executable(${PROJECT_NAME} ${ALL_SOURCES})