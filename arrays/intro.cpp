#include <iostream>


int main() {
    int scores [10];  // each index stores junk data

    scores[0] = 11;
    scores[4] = 31;
    scores[8] = 8983;

    std::cout << "--- Reading from array ---" << std::endl;
    std::cout << "scores[0] - " << scores[0] << std::endl;
    std::cout << "scores[4] - " << scores[4] << std::endl;
    std::cout << "scores[8] - " << scores[8] << std::endl;

    return 0;
}
