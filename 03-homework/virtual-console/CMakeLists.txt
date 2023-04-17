cmake_minimum_required(VERSION 3.24...3.26)

project(virtual-console)

find_package(SDL3 REQUIRED)
include_directories(${PROJECT_NAME} ${SDL3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} console.cxx)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
target_link_libraries(${PROJECT_NAME} ${SDL3_LIBRARIES})