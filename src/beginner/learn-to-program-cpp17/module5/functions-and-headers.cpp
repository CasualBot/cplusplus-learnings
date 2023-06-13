#include <iostream>
#include "util.h"

int main() 
{
    std::cout << "bool override: " << hello(true) << std::endl;
    std::cout << "double override: " << hello(3.0) << std::endl;
    std::cout << "int override: " << hello(1) << std::endl;
} 
