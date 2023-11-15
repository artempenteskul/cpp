#include <iostream>


void unique_numbers(int numbers [], unsigned int numbers_len) {
    int unique_data [numbers_len];

    unsigned int unique_counter = 0;

    for (unsigned int i = 0; i < numbers_len; i++) {
        bool already_in = false;

        for (unsigned int j = 0; j < unique_counter; j++) {
            if (unique_data[j] == numbers[i]) {
                already_in = true;
                break;
            }
        }

        if (!already_in) {
            unique_counter += 1;
            unique_data[unique_counter] = numbers[i];
        }
    }

    std::cout << "The collection contains " << unique_counter << " unique numbers." << std::endl;
}


int main() {
    int data[] {1,2,4,5,1,8,2,3,6,1,4,2};
    unique_numbers(data, 12);

    int data2[] {7,5,7,2,4,1,7,4,2};
    unique_numbers(data2, 9);

    return 0;
}
