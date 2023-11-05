#include <iostream>


bool is_leap_year(int year) {
    if (year % 4 == 0) {
        if ((year % 100 == 0) and (year % 400 == 0)) {
            return true;
        }
        return true;
    } 
    return false;
}


int main() {
    int my_year = 2002;
    
    if (is_leap_year(my_year)) {
        std::cout << "Year is leap!" << std::endl;
    } else {
        std::cout << "Year is not leap!" << std::endl;
    }
}
