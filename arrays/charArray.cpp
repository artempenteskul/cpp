#include <iostream>


int main() {
    char message[] {'h', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "printing message to console - " << message << std::endl;
    return 0;
}
