#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "You are too old!" << std::endl;
    }
    else if (age >= 18) {
        std::cout << "Welcome to the site!" << std::endl;
    }
    else if (age < 0) {
        std::cout << "Is this a joke?" << std::endl;
    }
    else {
        std::cout << "Access restricted!" << std::endl;
    }

    return 0;
}