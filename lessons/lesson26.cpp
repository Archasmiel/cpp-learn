#include <iostream>

void happyBirthday() {
    std::cout << "Happy Birthday!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday!\n";
    std::cout << "\n";
}

void happyBirthday2(std::string name, int age);

int main() {
    std::string name = "Serhii";
    int age = 22;

    happyBirthday();
    happyBirthday2(name, age);

    return 0;
}

/*
WILL NOT WORK IN MAIN FUNCTION
IF ITS BELOW

void happyBirthday() {
    std::cout << "Happy Birthday!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear you!\n";
    std::cout << "Happy Birthday!\n";
}

SO INSTEAD
*/

void happyBirthday2(std::string name, int age) {
    std::cout << "Happy Birthday " << name << "!\n";
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday " << name << "!\n";
    std::cout << "You are " << age << " yo!\n";
    std::cout << "\n";
}