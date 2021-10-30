# The Very most basic thing we need to have cmake project
cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

set(MY_VARIABLE "I am a costum variable")
message(STATUS "I am a message fro cmake-good project")
message(STATUS "Here is a message, the next words are actually a variable: ${MY_VARIABLE}")

if("TRUE")
    message(STATUS "I am a message from if")
endif()

add_subdirectory(say-hello)
add_subdirectory(hello-exe)
