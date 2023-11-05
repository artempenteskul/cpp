#include <iostream>
#include <string>

using namespace std;


int main() {
    string red = "red";
    string yellow = "yellow";
    string green = "green";

    string color = "green";

    if (color == red) {
        std::cout << "STOP!" << std::endl;
    } else if (color == yellow) {
        std::cout << "WAIT!" << std::endl;
    } else if (color == green) {
        std::cout << "GO!" << std::endl;
    } else {
        std::cout << "UNKOWN COLOR!" << std::endl;
    }
}
