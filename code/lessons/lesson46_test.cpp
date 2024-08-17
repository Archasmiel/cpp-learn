#include <iostream>

/*
    6011   0009   9013   9424
    6 1    0 0    9 1    9 2
    12 2   0 0    18 2   18 4
    1 2 2  0 0    1 8 2  1 8 4
    5+0+11+13 = 29 
     0 1    0 9    0 3    4 4
    1+9+3+8 = 21
    29+21 = 50

    50%10 = valid

*/

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);


int main() {
    std::string cardNumber;
    int result = 0;

    std::cout << "Type card number: ";
    std::getline(std::cin >> std::ws, cardNumber);

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << "Valid number";
    } else {
        std::cout << "Invalid number";
    }

    return 0;
}


int getDigit(const int number) {
    return number % 10 + number / 10 % 10;
}

int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size()-1 ; i >= 0 ; i -= 2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size()-2 ; i >= 0 ; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
