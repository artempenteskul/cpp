#include <cmath>
#include <iostream>


double countHexagonArea(double hexagonSideLen) {
    double hexagonArea = (3 * std::sqrt(3) / 2) * pow(hexagonSideLen, 2);
    return hexagonArea;
}


int main() {
    double hexagonSideLen;
    std::cout << "Enter hexagon side length: ";
    std::cin >> hexagonSideLen;
    std::cout << "Hexagon area with side length " << hexagonSideLen << " is equal to " << countHexagonArea(hexagonSideLen) << std::endl;
    return 0;
}
