set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
cmake_minimum_required(VERSION 3.10)
project(CPP_LEVEL4_OOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include_directories is okay, but target_include_directories is better
# It tells the compiler to look in /include for any "" style includes
include_directories(${PROJECT_SOURCE_DIR}/include)

# Re-scan for files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS 
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)
file(GLOB_RECURSE HEADER_FILES CONFIGURE_DEPENDS 
    "${PROJECT_SOURCE_DIR}/include/*.hpp"
    "${PROJECT_SOURCE_DIR}/include/*.tpp" # Added for your .tpp file in Project01
)

# Adding HEADER_FILES here helps the IDE "see" the relationship
# Replace the old include_directories line with this:
add_executable(CPP_LEVEL4_OOP ${SRC_FILES} ${HEADER_FILES})
target_include_directories(CPP_LEVEL4_OOP PRIVATE "${PROJECT_SOURCE_DIR}/include")
