#include <iostream>


int main() {
    int int_var = 22;
    int* p_int_var = {&int_var};

    std::cout << *p_int_var << std::endl;  //  should print 22

    return 0;
}
