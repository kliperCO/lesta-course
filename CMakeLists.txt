cmake_minimum_required(VERSION 3.24...3.26)

project(04-homework-part-1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Добавляем исходные файлы для проекта
add_executable(${PROJECT_NAME} lines.cxx)

# Устанавливаем опции компиляции
if (CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(${PROJECT_NAME} PRIVATE "-Wall" "-Wextra")
endif()