#include <iostream>


int main() {
    int bag_of_values [] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int value : bag_of_values) {
        std::cout << "value: " << value << std::endl;
    }

    return 0;
}
