#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*** CALCUALTOR ***" << '\n';

    std::cout << "Enter operation: ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1+num2;
            std::cout << "result: " << num1 << '+' << num2 << '=' << result << '\n';
            break;
        case '-':
            result = num1-num2;
            std::cout << "result: " << num1 << '-' << num2 << '=' << result << '\n';
            break; 
        case '*':
            result = num1*num2;
            std::cout << "result: " << num1 << '*' << num2 << '=' << result << '\n';
            break; 
        case '/':
            result = num1/num2;
            std::cout << "result: " << num1 << '/' << num2 << '=' << result << '\n';
            break; 
        default:
            std::cout << "Wrong operation!" << '\n';
    }

    return 0;
}