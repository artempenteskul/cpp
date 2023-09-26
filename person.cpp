#include <iostream>


int main() {
    int age;
    std::string name;

    std:: cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    std::cout << "Your name is " << name << " and your age is " << age << "." << std::endl;

    return 0;
}
