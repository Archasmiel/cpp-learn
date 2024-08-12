#include <iostream>

int main() {
    int grade = 75;
    std::cout << (grade >= 60 ? "High" : "Low") << '\n';

    int num = 13;
    std::cout << (num % 2 ? "Odd" : "Even") << '\n';

    bool hungry = true;
    std::cout << (hungry ? "Im hungry" : "Im full") << '\n';

    
    hungry ? std::cout << "hungry" << '\n' : std::cout << "full" << '\n';

    return 0;
}