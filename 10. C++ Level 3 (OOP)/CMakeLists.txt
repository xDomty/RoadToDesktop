cmake_minimum_required(VERSION 3.10)
project(CPP_LEVEL3_OOP)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include the "include" directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Automatically find all .cpp and .hpp files
file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE HEADER_FILES ${PROJECT_SOURCE_DIR}/include/*.hpp)

# Create the executable with all source files
add_executable(CPP_LEVEL3_OOP ${SRC_FILES} ${HEADER_FILES})
