#include <iostream>


int main() {
    int tool = 1; // here we can configure what tool to use for example

    switch (tool) {
        case 1: {
            std::cout << "Active tool is Pen." << std::endl;
        }
        break;

        case 2: {
            std::cout << "Active too is Marker." << std::endl;
        }
        break;

        default: {
            std::cout << "Can't match any tool." << std::endl;
        }
    }
    return 0;
}
