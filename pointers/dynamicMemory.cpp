#include <iostream>


int main() {
    // Dynamic Heap Memory
    int* p_num {nullptr};
    p_num = new int; // getting memory from the heap (dynamic allocation)
    *p_num = 33;

    std::cout << "printing the value from the heap: " << *p_num << std::endl;

    return 0;
}
