#include <iostream>


char prediction0 [] {"a lot of kinds running in the backyard!"};
char prediction1 [] {"a lot of empty beer bottles on your work table."};
char prediction2 [] {"you running away from something really scary!"};
char prediction3 [] {"you sitting in the dark typing lots of lines of code on your dirty computer."};
char prediction4 [] {"you yelling at your boss. And oh no! You get fired!"};
char prediction5 [] {"a lot of cars stuck in a terrible traffic jam."};


int main() {
    bool end {false};

    const int max_len {20};
    char name [max_len] {};

    std::cout << "What is your name?" << std::endl;

    std::cin.getline(name, max_len);

    while (!end) {
        std::cout << "Oh dear " << name << " , I see ";

        size_t rand_num = static_cast<size_t>((std::rand() % 6));

        switch (rand_num) {
            case 0:
                std::cout << prediction0 << std::endl;
                break;
            case 1:
                std::cout << prediction1 << std::endl;
                break;
            case 2:
                std::cout << prediction2 << std::endl;
                break;
            case 3: 
                std::cout << prediction3 << std::endl;
                break;
            case 4:
                std::cout << prediction4 << std::endl;
                break;
            case 5:
                std::cout << prediction5 << std::endl;
                break;
            default:
                std::cout << ", huum, I don't see anything." << std::endl;
        }

        std::cout << "Do you want me to try again? (Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;    
    } 

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    return 0;
}
