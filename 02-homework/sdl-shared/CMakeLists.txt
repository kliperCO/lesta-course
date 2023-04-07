cmake_minimum_required(VERSION 3.25)

project(sdl-shared)

set(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_shared/include)
find_library(SDL_LIBRARY
        NAMES sdl
        PATHS ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_shared
        )

include_directories(${SDL3_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} shared.cxx)
target_link_libraries(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../sdl/sdl_shared/libSDL3.so)
