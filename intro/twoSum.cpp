#include <iostream>


int addNumbers(int firstNum, int secondNum) {
    return firstNum + secondNum;
}


int main() {
    std::cout << "The sum of the numbers is: " << addNumbers(9, 12) << std::endl;
    std::cout << "The sum of the numbers is: " << addNumbers(19, 33) << std::endl;
    return 0;
}
