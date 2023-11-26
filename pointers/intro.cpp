#include <iostream>


int main() {
    
    // Declare and initialize pointer
    int* p_int {nullptr};  // initalizing to null pointer value
    double* p_double {nullptr};

    // Pointers to different variables are of the same size
    std::cout << "sizeof(int*) - " << sizeof(p_int) << std::endl;
    std::cout << "sizeof(double*) - " << sizeof(p_double) << std::endl;

    // Initializing pointers and assigning them data
    int int_var {43};
    int* p_int_var{&int_var};

    std::cout << "int_var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory) : " << p_int_var << std::endl;

    // You can also change the address stored in a pointer at any time

    return 0;
}
