#include <iostream>

int main() {
    for (int i = 0; i <= 3; i++) {
        std::cout << "Happy New Year" << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i <= 10; i++) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    for (int i = 0; i <= 10; i+=2) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    for (int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    for (int i = 10; i >= 0; i-=2) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    return 0;
}