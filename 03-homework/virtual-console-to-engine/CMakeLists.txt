cmake_minimum_required(VERSION 3.24...3.26)

project(virtual-console-to-engine)

find_package(SDL3 REQUIRED)
include_directories(${PROJECT_NAME} ${SDL3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cxx engine.cxx engine.hxx)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
target_link_libraries(${PROJECT_NAME} SDL3::SDL3-shared)