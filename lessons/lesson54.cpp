#include <iostream>

struct Car {
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color); 

int main() {

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    std::cout << &car1 << '\n';
    printCar(car1);
    std::cout << &car2 << '\n';
    printCar(car2);

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    std::cout << &car1 << '\n';
    printCar(car1);
    std::cout << &car2 << '\n';
    printCar(car2);
    
    return 0;
}   

void printCar(Car &car) {
    // copying a struct if not an address in argument
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
    std::cout << car.color << '\n';
    std::cout << '\n';
}


// &car - is an original
void paintCar(Car &car, std::string color) {
    car.color = color;
}