#include <iostream>


int main() {
    int var {33};  // initialization of variable

    int* p_var {&var};  // non-const pointer to non-const variable 
    const int* p_var_1 {&var};  // non-const pointer to const variable
    const int* const p_var_2 {&var};  // const pointer to const variable
    int* const p_var_3 {&var};  // const pointer to non-const variable

    return 0; 
}
