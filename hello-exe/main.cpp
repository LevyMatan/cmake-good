#include <iostream>

#include "hello.hpp"
int main()
{
    hello::say_hello();
    std::cout << "I am using say-hello version: " << SAY_HELLO_VERSION << std::endl;
    return 0;
}