#include <iostream>


int* maximum_address(int data[], unsigned int size) {
    int* maximum_address {nullptr};
    int maximum_value;

    for (unsigned int i = 0; i < size; i++) {
        if (data[i] > maximum_value) {
            maximum_value = data[i];
            maximum_address = &data[i];
        }
    }
    return maximum_address;
}


int main() {
    int data[] {11, 2, 52, 53, 9, 13, 5, 7, 12, 11};

    int* max_address = maximum_address(data, 10);
    std::cout << "max_address: " << max_address << std::endl;

    return 0;
}
