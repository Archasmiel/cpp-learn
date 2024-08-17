#include <iostream>

void walk(int steps);
void walkRecursively(int steps);
int factorial(int num);
int factorialRecursively(int num);

int main() {
    walk(10);
    walkRecursively(10);

    std::cout << factorial(10) << '\n';
    std::cout << factorialRecursively(10) << '\n';

    return 0;
}   

void walk(int steps) {
    for (int i = 0 ; i < 10 ; i++) {
        std::cout << "You made a step!\n";
    }
}

void walkRecursively(int steps) {
    if (steps > 0) {
        std::cout << "You made a step!\n";
        walk(steps-1);
    }
}

int factorial(int num) {
    int res = 1;
    for (int i = 2 ; i <= num ; i++) {
        res *= i;
    }
    return res;
}

int factorialRecursively(int num) {
    if (num > 2) {
        return num * factorial(num-1);
    } else {
        return 2;
    }
}