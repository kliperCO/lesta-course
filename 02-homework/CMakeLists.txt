cmake_minimum_required(VERSION 3.25)
project(02-homework)

add_subdirectory(sdl-shared)
add_subdirectory(sdl-static)
#add_executable(${PROJECT_NAME} main.cxx)

# Find SDL2 library
find_package(SDL3 REQUIRED)
include_directories(${SDL3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} sdl-static/static.cxx)
target_link_libraries(${PROJECT_NAME} ${SDL3_LIBRARIES} ${SDL3_IMAGE_LIBRARIES} ${SDL3_TTF_LIBRARIES})

