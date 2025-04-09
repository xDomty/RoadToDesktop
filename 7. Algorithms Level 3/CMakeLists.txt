cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Define source and include directories
set(CMAKE_CXX_STANDARD 14) # Or your preferred C++ standard

set(INCLUDE_DIRS
    include/Problems
    include/Projects
)

set(SOURCE_DIRS
    SRC/Problems
    SRC/Projects
)

# Add include directories
include_directories(${INCLUDE_DIRS})

# Find source files
file(GLOB_RECURSE SOURCES
    "src/*.cpp"
    "${SOURCE_DIRS}/*.cpp"
)

# Add executable
add_executable(MyExecutable SRC/main.cpp ${SOURCES})

# Optional: Add compile flags (e.g., for warnings)
# target_compile_options(MyExecutable PRIVATE "-Wall" "-Wextra")

# Optional: Link against libraries if needed
# target_link_libraries(MyExecutable PRIVATE your_library)