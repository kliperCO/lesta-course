cmake_minimum_required(VERSION 3.25)

project(shared)

set(CMAKE_INCLUDE_PATH
        ${CMAKE_INCLUDE_PATH}
        ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_shared_lib/include
        )

find_library(SDL_LIBRARY
        NAMES sdl
        PATHS ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_shared_lib
        )

add_executable(${PROJECT_NAME} shared-main.cxx)
target_link_libraries(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_shared_lib/libSDL3.so.0.0.0
        )