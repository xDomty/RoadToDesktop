cmake_minimum_required(VERSION 3.30)
project(7thCourseALGORITHMS)

set(CMAKE_CXX_STANDARD 20)

# Collect all header files recursively in the src/ folder
file(GLOB_RECURSE HEADER_FILES "src/**/*.hpp" "src/**/*.h")

# Print or view the collected header files (optional, for verification)
message(STATUS "Header files: ${HEADER_FILES}")

# Add executable with source files
file(GLOB_RECURSE SRC_FILES "src/**/*.cpp")
add_executable(7thCourseALGORITHMS
        main.cpp
        ${SRC_FILES}
        ${HEADER_FILES}
        include/Problems/Problem9.hpp
)