#include <iostream>

namespace hello {

    void say_hello(void)
    {
        std::cout << "Hello, World!" << std::endl;
        std::cout << "I was defined by the CMakeLIsts insid ethe say-hello lib" << std::endl;
        std::cout << "Version = " << SAY_HELLO_VERSION << std::endl;
    }
    
}