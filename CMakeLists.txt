# The Very most basic thing we need to have cmake project
cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

# The default for add_library() is to create a static library.
# options are: SHARED, STATIC, MODULE, OBJECT
# SHARED: means that the library will be dynamically linked with the program.
# STATIC: means that the library will be linked with the program.
# MODULE: means that the library will be compiled as a shared library.
# OBJECT: means that the library will be compiled as an object file.
# You can change the defualt for add_library() by using the following command:
# cmake -D BUILD_SHARED_LIBS=TRUE
add_library(
    say-hello STATIC
    hello.hpp
    hello.cpp
)

add_executable(cmake-good main.cpp)

target_link_libraries(cmake-good PRIVATE say-hello)