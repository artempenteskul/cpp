#include <iostream>


int main() {
    int a = 11;
    int b = 22;

    int max_number = (a >= b) ? a : b; // example of ternary operator usage

    std::cout << "Printing maximum number is: " << max_number << std::endl;

    return 0;
}
