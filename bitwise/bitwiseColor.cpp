#include <iostream>


const unsigned int red_mask {0xFF000000};
const unsigned int green_mask {0x00FF0000};
const unsigned int blue_mask {0x0000FF00};
const unsigned int alpha_mask {0x000000FF};


int main() {
    unsigned int my_color {0xAABCDE00};

    std::cout << std::hex << std::showbase << std::endl;

    std::cout << "Red is: " << ((my_color & red_mask) >> 24) << std::endl;
    std::cout << "Green is: " << ((my_color & green_mask) >> 16) << std::endl;
    std::cout << "Blue is: " << ((my_color & blue_mask) >> 8) << std::endl;
    std::cout << "Alpha is: " << ((my_color & alpha_mask) >> 0) << std::endl;
}
