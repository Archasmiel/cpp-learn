#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) {
        std::cout << "your name can't be longer 12 chars!" << std::endl;
    } else {
        std::cout << "Welcome" << std::endl;
    }

    if (name.empty()) {
        std::cout << "enter a name!" << std::endl;
    } else {
        std::cout << "Welcome " << name << std::endl;
    }

    name.clear();
    std::cout << '\'' << name << '\'' << std::endl;

    name.append("Serhii");
    std::cout << '\'' << name << '\'' << std::endl;

    std::cout << name.at(0) << std::endl;

    name.insert(1, "aboba");
    std::cout << name << std::endl;

    std::cout << name.find('a') << std::endl;

    name.erase(1, 5);
    std::cout << name << std::endl;

    return 0;
}