#include <iostream>

int main() {
    int temp;

    std::cout << "Enter temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {
        std::cout << "Good" << '\n';
    }
    else {
        std::cout << "Bad" << '\n';
    }

    if (temp <= 0 || temp >= 30) {
        std::cout << "Bad" << '\n';
    }
    else {
        std::cout << "Good" << '\n';
    }

    bool sunny = true;
    if (sunny /* == true */) {
        std::cout << "It is sunny outside" << '\n';
    }
    else {
        std::cout << "It is cloudy outside" << '\n';
    }

    if (!sunny /* == false */) {
        std::cout << "It is cloudy outside" << '\n';
    }
    else {
        std::cout << "It is sunny outside" << '\n';
    }
}