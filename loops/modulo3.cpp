#include <vector>
#include <iostream>


int main() {
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for (int num : numbers) {
        if (num % 3 == 0) {
            std::cout << num;
            std::cout << " "; 
        }
    }
}
