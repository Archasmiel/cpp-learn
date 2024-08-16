#include <iostream>

int main() {
    std::string name;

    while (name.empty()) {
        std::cout << "enter a name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    while (true) {
        std::cout << "HELP IM STUCK";
    }

    return 0;
}