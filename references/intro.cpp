#include <iostream>


int main() {
    int int_value {45};
    double double_value {44.44};

    int& reference_to_int_value {int_value};
    double& reference_to_double_value {double_value};

    std::cout << "int_value: " << int_value << std::endl;
    std::cout << "double_value: " << double_value << std::endl;

    std::cout << "reference_to_int_value: " << reference_to_int_value << std::endl;
    std::cout << "reference_to_double_value: " << reference_to_double_value << std::endl;

    std::cout << "&int_value: " << &int_value << std::endl;
    std::cout << "&double_value: " << &double_value << std::endl;

    std::cout << "&reference_to_int_value: " << &reference_to_int_value << std::endl;
    std::cout << "&reference_to_double_value: " << &reference_to_double_value << std::endl; 

    return 0;
} 
