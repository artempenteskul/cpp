#include <iostream>


int main() {
    int var1 {1}; // braced (the most strict to values and types)
    int var2 (1); // functional
    int var3 = 1; // assignment

    std::cout << "size of int - " << sizeof(int) << " bytes" << std::endl;

    return 0;
}
