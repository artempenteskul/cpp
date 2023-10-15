#include <iostream>


int main() {
    std::cout << "Where do you live?" << std::endl;
    std::string country;
    std::getline(std::cin, country);
    std::cout << "I've heard a lot of nice things about " << country << "! I'd like to visit it one day!" << std::endl;
    return 0;
}
