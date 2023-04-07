cmake_minimum_required(VERSION 3.25)

project(sdl-static)

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_static/include)
find_library(SDL_LIBRARY
        NAMES sdl
        PATHS ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_static
        )

include_directories(${SDL3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} static.cxx)
target_link_libraries(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_static/libSDL3.a)
