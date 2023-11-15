#include <iostream>


int main() {
    double salaries[5] {13.4, 44.3, 322.11, 32.9, 991.1};

    for (int i = 0; i < 5; i++) {
        std::cout << "salary of person " << i + 1 << " is equal to " << salaries[i] << std::endl;
    }

    return 0;
}
