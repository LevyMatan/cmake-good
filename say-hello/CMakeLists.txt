
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
    src/say-hello/hello.hpp
    src/say-hello/hello.cpp
)

target_include_directories(say-hello PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src/say-hello"
)

# When defining a values for the library, You can choose are ther are being exposed.
# The default is to expose the library by using PUBLIC keyword.
# PUBLIC means that both the library and all who icludes the library have access to this defenition.
# PRIVATE means that only the library has access to this defenition.
# INTERFACE means that the library does not have access to this defenition, but all entities who consume the library do.
target_compile_definitions(say-hello PUBLIC
    SAY_HELLO_VERSION=44
)