#include <iostream>


int main() {
    int sum = 0;

    for(unsigned int i = 0; i < 100; i++) {
        sum += i;
    }

    std::cout << "The result is: " << sum << std::endl;
    return 0;
}
