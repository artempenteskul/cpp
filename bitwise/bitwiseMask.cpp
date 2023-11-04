#include <iostream>


const unsigned char mask_bit_0 {0b00000001};
const unsigned char mask_bit_1 {0b00000010};
const unsigned char mask_bit_2 {0b00000100};
const unsigned char mask_bit_3 {0b00001000};
const unsigned char mask_bit_4 {0b00010000};
const unsigned char mask_bit_5 {0b00100001};
const unsigned char mask_bit_6 {0b01000001};
const unsigned char mask_bit_7 {0b10000001};


void use_options_v0(bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool flag5, bool flag6, bool flag7) {
    std::cout << "flag0 is : " << flag0 << ", do something with it." << std::endl;
    std::cout << "flag1 is : " << flag1 << ", do something with it." << std::endl;
    std::cout << "flag2 is : " << flag2 << ", do something with it." << std::endl;
    std::cout << "flag3 is : " << flag3 << ", do something with it." << std::endl;
    std::cout << "flag4 is : " << flag4 << ", do something with it." << std::endl;
    std::cout << "flag5 is : " << flag5 << ", do something with it." << std::endl;
    std::cout << "flag6 is : " << flag6 << ", do something with it." << std::endl;
    std::cout << "flag7 is : " << flag7 << ", do something with it." << std::endl;
}


void use_options_v1(unsigned char flags) {
    std::cout << "bit0 is : " << ((flags & mask_bit_0) >> 0) << ", do something with it." << std::endl;
    std::cout << "bit1 is : " << ((flags & mask_bit_1) >> 1) << ", do something with it." << std::endl;
    std::cout << "bit2 is : " << ((flags & mask_bit_2) >> 2) << ", do something with it." << std::endl;
    std::cout << "bit3 is : " << ((flags & mask_bit_3) >> 3) << ", do something with it." << std::endl;
    std::cout << "bit4 is : " << ((flags & mask_bit_4) >> 4) << ", do something with it." << std::endl;
    std::cout << "bit5 is : " << ((flags & mask_bit_5) >> 5) << ", do something with it." << std::endl;
    std::cout << "bit6 is : " << ((flags & mask_bit_6) >> 6) << ", do something with it." << std::endl;
    std::cout << "bit7 is : " << ((flags & mask_bit_7) >> 7) << ", do something with it." << std::endl;
}


int main() {
    use_options_v0(1, 1, 0, 0, 1, 0, 0, 0);
    use_options_v1(mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_6);
    return 0;
}
