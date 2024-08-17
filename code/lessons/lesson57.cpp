#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

        void printData() {
            std::cout << "Human[";
            std::cout << "name=" << name; 
            std::cout << ", age=" << age; 
            std::cout << ", gpa=" << gpa << "]\n"; 
        }

    // constructor
    // special method for creation of object
    Student(std::string name, int age, double g) {
        this->name = name;
        this->age = age;
        gpa = g;
    }

    
};

class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void printData() {
            std::cout << "Car[";
            std::cout << "make=" << make; 
            std::cout << ", model=" << model; 
            std::cout << ", year=" << year; 
            std::cout << ", color=" << color << "]\n"; 
        }

    Car(std::string make, std::string model, int year, std::string color) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {
    // car1.make = "Ford";

    Student student1("Serhii", 22, 3.2);
    Student student2("Illya", 16, 2.5);
    Student student3("Rick", 65, 100.0);

    student1.printData();
    student2.printData();
    student3.printData();

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    car1.printData();
    car2.printData();

    return 0;
}   
