cmake_minimum_required(VERSION 3.25)
project(01-1-hello-world CXX)

add_executable(01-1-hello-world main.cxx)

#if(NOT CMAKE_BUILD_TYPE)
#    set(CMAKE_BUILD_TYPE Release)
#endif()

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${CMAKE_CURRENT_LIST_DIR}/../../../bin/tests
        LIBRARY DESTINATION ${CMAKE_CURRENT_LIST_DIR}/../../../bin/tests
        ARCHIVE DESTINATION ${CMAKE_CURRENT_LIST_DIR}/../../../bin/tests)

include(CTest)

add_test(NAME check_hello_exit_zero COMMAND 01-1-hello-world)