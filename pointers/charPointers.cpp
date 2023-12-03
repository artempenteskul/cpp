#include <iostream>


int main() {
    const char* message {"Hello, World!"};
    std::cout << "message: " << message << std::endl; // prints Hello, World!
    std::cout << "message: " << *message << std::endl; // prints H
    std::cout << "message: " << &message << std::endl; // prints address of pointer variable

    return 0;
}
