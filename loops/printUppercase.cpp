#include <iostream>


int main() {
    for (unsigned int i = 0; i < 255; i++) {

        if ((i > 0x40) && (i < 0x5b)) {
            
            std::cout << i;
            
            if (i != 'Z') {
                std::cout << " ";
            }
        } 
    }

    return 0;
}
