cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Define source directories
set(HOMEWORKS_SRC_DIR "SRC/Homeworks")
set(LESSONS_SRC_DIR "SRC/Lessons")

# Collect source files
file(GLOB HOMEWORKS_SRC "${HOMEWORKS_SRC_DIR}/*.cpp")
file(GLOB LESSONS_SRC "${LESSONS_SRC_DIR}/*.cpp")

# Define header directories
include_directories("Homeworks" "Lessons")

# Define the executable
add_executable(my_executable SRC/main.cpp ${HOMEWORKS_SRC} ${LESSONS_SRC})