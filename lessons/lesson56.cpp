#include <iostream>

class Human {
    public:
        // attributes
        std::string name = "Rick";
        std::string occupation = "Scientist";
        int age = 65;

        // methods
        void eat() {
            std::cout << name << " is eating...\n";
        }
        void drink() {
            std::cout << name << " is drinking...\n";
        }
        void sleep() {
            std::cout << name << " is sleeping...\n";
        }
        void printData() {
            std::cout << "Human[";
            std::cout << "name=" << name; 
            std::cout << ",occupation=" << occupation; 
            std::cout << ",age=" << age << "]\n"; 
        }
};

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "You step on the gas!\n";
        }
        void brake() {
            std::cout << "You step on the brake!\n";
        }
        void printData() {
            std::cout << "Car[";
            std::cout << "make=" << make; 
            std::cout << ",model=" << model; 
            std::cout << ",year=" << year; 
            std::cout << ",color=" << color << "]\n"; 
        }
};

int main() {
    Human human1;
    human1.name = "Serhii";
    human1.age = 22;
    human1.occupation = "Robocode Teacher L2";

    human1.printData();
    human1.eat();
    human1.drink();
    human1.sleep();


    Human human2;
    human2.name = "Illya";
    human2.age = 17;
    human2.occupation = "Robocode Student";

    human2.printData();
    human2.eat();
    human2.drink();
    human2.sleep();


    Human human3;

    human3.printData();
    human3.eat();
    human3.drink();
    human3.sleep();


    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    car1.printData();
    car1.accelerate();
    car1.brake();

    return 0;
}   
