#include <iostream>


int main() {
    int* p_num { new int {55} }; // points to some address in dynamic memory
    
    int num {5}; // lives by another address

    p_num = &num; // now we lost access to the memory which points to 55, but this value is still in dynamic memory. memory leak

    return 0;
}
