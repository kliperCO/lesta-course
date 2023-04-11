cmake_minimum_required(VERSION 3.24...3.25)

project(static)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_INCLUDE_PATH
        ${CMAKE_INCLUDE_PATH}
        ${CMAKE_CURRENT_LIST_DIR} /../sdl/sdl_static_lib/include
        )

find_library(SDL_LIBRARY
        NAMES sdl
        PATHS ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_static_lib
        )

add_executable(${PROJECT_NAME} static-main.cxx)

target_link_libraries(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_static_lib/libSDL3.a
        )
