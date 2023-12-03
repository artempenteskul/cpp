#include <iostream>


// we need to use dynamic array here (heap memory)

void merge_arrays(int data1[], int data2[], unsigned int size1, unsigned int size2) {

    int* new_array = new int [size1 + size2];

    for (unsigned int i = 0; i < size1; i++) {
        new_array[i] = data1[i];
    }

    for (unsigned int i = 0; i < size2; i++) {
        new_array[i + size1] = data2[i];
    }

    for (int i = 0; i < (size1 + size2); i++) {
        std::cout << new_array[i] << " ";
    }

    std::cout << std::endl;

    delete[] new_array;
    new_array = nullptr;
}



int main() {
    int data1[] {1, 2, 3, 4, 5};
    int data2[] {11, 12, 13, 14, 15};
    int size1 = 5;
    int size2 = 5;

    merge_arrays(data1, data2, size1, size2);

    return 0;
}
