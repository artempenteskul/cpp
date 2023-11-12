#include <iostream>


int main() {
    const unsigned int COUNT {10};
    unsigned int i {11};

    do {
        std::cout << "i love cpp" << std::endl;
        i++;
    } while (i < COUNT);

    return 0; 
}