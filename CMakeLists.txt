cmake_minimum_required (VERSION 2.6)
project (jsonmodule_test C)

if (CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ansi -pedantic -Wall")
endif()

add_library(jsonmodule jsonmodule.c)
add_executable(jsonmodule_test test.c)
target_link_libraries(jsonmodule_test jsonmodule)
