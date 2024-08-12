#include <iostream>

int main() {
    int number;

    /*
    while (number < 0) {
        std::cout << "Enter a positive num: ";
        std::cin >> number;
    }
    */
    
    do {
        std::cout << "Enter a positive num: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The num is " << number << std::endl;

    return 0;
}