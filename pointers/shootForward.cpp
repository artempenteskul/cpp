#include <iostream>


void shoot_forward(int data[], unsigned int offset) {
    std::cout << "The element " << offset << " slots away from the beginning is: " << *(data + offset) << std::endl;
}


int main() {
    int input_data[] {1, 3, 6, 3, 9, 3, 5, 7, 2, 11};
    shoot_forward(input_data, 3);
    return 0;
}
