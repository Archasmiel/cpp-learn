#include <iostream>

int main() {
    // double, char, bool, etc - primitive
    // std::string - reference

    // sizeof()

    double gpa = 2.5;
    std::cout << sizeof(gpa) << "\n";
    std::cout << sizeof(double) << "\n";

    std::string name = "Serhii";
    std::cout << sizeof(name) << "\n";
    std::cout << sizeof(std::string) << "\n";

    char grade = 'A';
    std::cout << sizeof(grade) << "\n";
    std::cout << sizeof(char) << "\n";

    bool student = true;
    std::cout << sizeof(student) << "\n";
    std::cout << sizeof(bool) << "\n";

    char grades[] = {'A', 'B', 'C', 'D'};
    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";

    std::string names[] = {"Serhii", "Maksim", "Oleksii"};
    std::cout << sizeof(names)/sizeof(names[0]) << " elements\n";
    std::cout << sizeof(names)/sizeof(std::string) << " elements\n";

    return 0;
}