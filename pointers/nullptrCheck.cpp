#include <iostream>


int main() {
    int* p_num {};

    if (p_num != nullptr) {
        std::cout << "p_num points to a VALID address: " << p_num << std::endl;
    } else {
        std::cout << "p_num points to an INVALID address." << std::endl;
    }

    return 0;
}
