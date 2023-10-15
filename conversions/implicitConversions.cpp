#include <iostream>


int main() {
    double price = 2.33;
    int qty = 40;

    std::cout << "Total price: " << qty * price << " dollars." << std::endl;

    int x;
    double y = 44.4;

    x = y;

    std::cout << "X stores only 44 now, value was converted to int: " << x << std::endl;
}
