cmake_minimum_required(VERSION 3.24...3.26)

project(engine-to-game VERSION 1.0)

# Set the include directory path
set(INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/../virtual-console-to-engine)

# Check if the include directory exists
if(NOT EXISTS ${INCLUDE_DIR})
    message(FATAL_ERROR "Include directory not found: ${INCLUDE_DIR}")
endif()

# Add the include directory to the project
include_directories(${INCLUDE_DIR})

# Create the shared library
find_package(SDL3 REQUIRED)

add_library(engine SHARED engine.cxx)
target_link_libraries(engine PRIVATE SDL3::SDL3-shared)

# Create the executable
add_executable(${PROJECT_NAME} main.cxx)

# Link the library with the executable
target_link_libraries(${PROJECT_NAME} engine)

# Add the include directory to the library
target_include_directories(engine PRIVATE ${INCLUDE_DIR})