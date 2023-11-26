#include <iostream>


int main() {
    // increment/decrement pointer addresses manually
    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int* p_score {scores};

    std::cout << "values in scores array (p_score pointer increment): " << std::endl;

    std::cout << "address: " << p_score << "value: " << *(p_score) << std::endl;
    p_score++;

    std::cout << "address: " << p_score << "value: " << *(p_score) << std::endl;
    p_score++;

    std::cout << "address: " << p_score << "value: " << *(p_score) << std::endl;
    p_score++;

    std::cout << "address: " << p_score << "value: " << *(p_score) << std::endl;
    p_score -= 2;

    std::cout << "address: " << p_score << "value: " << *(p_score) << std::endl;
    p_score++;
}
