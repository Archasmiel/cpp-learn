#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "*** Temperature conversion ***" << std::endl;

    std::cout << "Enter temperature: ";
    std::cin >> temp; 

    std::cout << "F/f = Farenheit" << std::endl;
    std::cout << "C/c = Celsius" << std::endl;
    std::cout << "K/k = Kelvin" << std::endl;
    std::cout << "Enter unit: ";
    std::cin >> unit; 

    switch (unit) {
        case 'C': case 'c':
            std::cout << "F = " << (temp*9/5+32) << std::endl;
            std::cout << "K = " << (temp+273.15) << std::endl;
            break;
        case 'F': case 'f':
            std::cout << "C = " << ((temp-32)*5/9.0) << std::endl;
            std::cout << "K = " << ((temp-32)*5/9+273.15) << std::endl;
            break;
        case 'K': case 'k':
            std::cout << "F = " << ((temp-273.15)*9/5+32) << std::endl;
            std::cout << "C = " << (temp-273.15) << std::endl;
            break;
    }

    return 0;
}