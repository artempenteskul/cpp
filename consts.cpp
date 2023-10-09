#include <iostream>


constinit int constinitVariable = 33; // not actual const variable (we can change it later in code), shoud be declared not in main function


int main() {
    const unsigned int constVariable = 123;  // we cannot change the value of this variable later in code
    constexpr unsigned int constexprVariable = 222; // we compute this value during compile time (our program runs with this data)
    return 0;
}