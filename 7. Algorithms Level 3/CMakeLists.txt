cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

# Include directories
set(INCLUDE_DIRS
    include/Problems
    include/Projects
)
include_directories(${INCLUDE_DIRS})

# Source directories
set(SOURCE_DIRS
    SRC/Problems
    SRC/Projects
)

# Find source files
file(GLOB_RECURSE SOURCES
    ${SOURCE_DIRS}/*.cpp
)

# Add executable
add_executable(MyExecutable SRC/main.cpp ${SOURCES})
