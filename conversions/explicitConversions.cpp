#include <iostream>


int main() {
    double x = 4.32;
    double y = 3.88;

    int sum = static_cast<int>(x + y);
    
    int sum2 = static_cast<int>(x) + static_cast<int>(y);

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The sum2 is: " << sum2 << std::endl;
    std::cout << "Size of sum is: " << sizeof(sum) << " bytes." << std::endl;
}
