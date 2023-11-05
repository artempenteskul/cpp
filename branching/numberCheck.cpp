#include <iostream>


int main() {
    int my_number;

    std::cout << "Please type in an integral value: " << std::endl;
    std::cin >> my_number;

    if (my_number % 2 == 0) {
        std::cout << my_number << " is even." << std::endl;
    } else {
        std::cout << my_number << " is odd." << std::endl;
    }
    return 0;
}
