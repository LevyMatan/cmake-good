# The Very most basic thing we need to have cmake project
cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

set(MY_VARIABLE "I am a costum variable")
message(STATUS "I am a message fro cmake-good project")
message(STATUS "Here is a message, the next words are actually a variable: ${MY_VARIABLE}")

# Remember all variables in CMake are strings
# So we take a condition, all strings are true except 0 and false

set(MY_STRING "123")
set(MY_OTHER_STRING "1223")

# We can use the condition to check if a variable is equal to another
if(MY_STRING STREQUAL MY_OTHER_STRING)
    message(STATUS "Condition was met")
else()
    message(STATUS "Condition was NOT met")
endif()

set(my_value 0)
while(my_value LESS 10)
    message(STATUS "Value is ${my_value}")
    math(EXPR my_value "${my_value} + 1")
endwhile()

foreach(item IN ITEMS "one" "two" "three")
    message(STATUS "Item is ${item}")
endforeach(item IN ITEMS )

foreach(item RANGE 0 99 10)
    message(STATUS "Item RANGE 0 99 10: ${item}")
endforeach(item RANGE 0 99 10)

add_subdirectory(say-hello)
add_subdirectory(hello-exe)
add_subdirectory(cmake-functions)
add_subdirectory(cmake-property)
add_subdirectory(cmake-scopes)
