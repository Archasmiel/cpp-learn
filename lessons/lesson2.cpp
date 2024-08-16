#include <iostream>

int main() {
    int x;   // declaration
    x = 2;   // assignment
    int y = 5;  // both

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << '\n' << '\n';



    // second part
    int age = 21;
    int year = 2024;
    int days = 7.5;
    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';
    std::cout << '\n';

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';
    std::cout << '\n';

    char grade = 'A';
    char init = 'B';
    char currency = '$';
    std::cout << grade << '\n';
    std::cout << init << '\n';
    std::cout << currency << '\n';
    std::cout << '\n';

    bool isStudent = false;
    bool power = true;
    bool forSale = true;
    std::cout << isStudent << '\n';
    std::cout << power << '\n';
    std::cout << forSale << '\n';
    std::cout << '\n';

    std::string name = "Serhii";
    std::string day = "Wednesday";
    std::string ip = "192.168.0.1";
    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << ip << '\n';
    std::cout << '\n';

    std::cout << ip << " is belong to " << name << std::endl;
    std::cout << day << " " << grade << std::endl;

    return 0;
}