#include <iostream>

int main() {

    std::string cars[] = {"Lada", "Mustang", "Camry"};

    std::cout << cars << std::endl;
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    cars[0] = "Ford";
    std::cout << cars << std::endl;
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;


    std::string cars1[3];
    cars1[0] = "Ford";
    cars1[1] = "Lada";
    cars1[2] = "Porshe";

    std::cout << cars1 << std::endl;
    std::cout << cars1[0] << std::endl;
    std::cout << cars1[1] << std::endl;
    std::cout << cars1[2] << std::endl;


    double prices[] = {5.00, 7.15, 9.99, 15.00};
    std::cout << prices << std::endl;
    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3] << std::endl;

    return 0;
}