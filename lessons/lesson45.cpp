#include <iostream>

void printInfo(const std::string &name, const int &age);

int main() {
    std::string name = "Serhii";
    int age = 21;

    printInfo(name, age);

    return 0;
}

// if have variable
// and dont want it to be modified
// especially if its original
// make      const
void printInfo(const std::string &name, const int &age) {
    // name = "";  not working
    // age = 0;  not working
    std::cout << name << '\n';
    std::cout << age << '\n';
}