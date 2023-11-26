#include <iostream>


int main() {
    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int* p_score {scores};

    // print the address
    std::cout << "scores: " << scores << std::endl;
    std::cout << "p_score: " << p_score << std::endl;

    // print the content at that address
    std::cout << std::endl;
    std::cout << "printing out data at array address: " << std::endl;
    std::cout << "*scores: " << *scores << std::endl;
    std::cout << "scores[0]: " << scores[0]  << std::endl;
    std::cout << "*p_score: " << *p_score << std::endl;
    std::cout << "p_score[0]: " << p_score[0] << std::endl;

    return 0;
}
