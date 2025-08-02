cmake_minimum_required(VERSION 3.10)
project(CPP_LEVEL4_OOP LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Include the "include" directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Automatically find all .cpp and .hpp files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE HEADER_FILES CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/include/*.hpp)

# Create the executable with all source files
add_executable(CPP_LEVEL4_OOP ${SRC_FILES})

# Optionally, group headers in IDEs (not compiled)
source_group(TREE ${PROJECT_SOURCE_DIR}/include PREFIX "Header Files" FILES ${HEADER_FILES})

# Enable warnings
if(MSVC)
    target_compile_options(CPP_LEVEL4_OOP PRIVATE /W4 /permissive-)
else()
    target_compile_options(CPP_LEVEL4_OOP PRIVATE -Wall -Wextra -pedantic)
endif()