#include <iostream>


int main() {
    int num1 {3};
    int num2 {4};
    int sum = num1 + num2;
    int diff = num1 - num2;  

    std::cout << "sum: " << sum << std::endl;
    std::cout << "diff: " << diff << std::endl;

    int mult = num1 * num2;
    int div = num2 / num1;
    int mod = num2 % num1;

    std::cout << "mult: " << mult << std::endl;
    std::cout << "div: " << div << std::endl;
    std::cout << "mod: " << mod << std::endl;
}
