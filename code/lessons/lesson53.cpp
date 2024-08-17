#include <iostream>

struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

int main() {
    student student1;
    student1.name = "Serhii";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Ivan";
    student2.gpa = 3.1;
    student2.enrolled = false;

    student student3;
    student3.name = "Illya";
    student3.gpa = 2.5;
    student3.enrolled = true;

    std::cout << student1.name << '\n'; 
    std::cout << student1.gpa << '\n'; 
    std::cout << student1.enrolled << '\n'; 
    std::cout << '\n';

    std::cout << student2.name << '\n'; 
    std::cout << student2.gpa << '\n'; 
    std::cout << student2.enrolled << '\n'; 
    std::cout << '\n';

    std::cout << student3.name << '\n'; 
    std::cout << student3.gpa << '\n'; 
    std::cout << student3.enrolled << '\n'; 
    std::cout << '\n';

    return 0;
}   