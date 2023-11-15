#include <iostream>


bool is_collection_sorted(int numbers [], unsigned int numbers_len) {
    bool sorted = true;

    for (unsigned int i = 0; i < numbers_len; i++) {
        if (i == 0) {
            continue;
        }

        if (!(numbers[i] > numbers[i - 1])) {
            sorted = false;
            break;
        }
    }

    return sorted;
}


int main() {
    int data[] {1, 2, 4, 5, 8, 12, 13, 16, 71, 92};
    int data2[] {1, 112, 4, 5, 8, 12, 13, 16, 71, 92};

    std::cout << "is data array sorted: " << is_collection_sorted(data, 10) << std::endl;
    std::cout << "is data2 array sorted: " << is_collection_sorted(data2, 10) << std::endl;

    return 0;
}
