#include <iostream>

class Animal {
    public:
        bool alive = true;

        void eat() {
            std::cout << "This animal is eating...\n";
        }  
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Dog goes woof!\n";
        }


};

class Cat : public Animal {
    public:
        void meow() {
            std::cout << "Cat goes meow!\n";
        }
};


class Shape {
    public: 
        double area;
        double volume;

};

class Cube: public Shape {
    public:
        double side;

    Cube(double side) {
        this->side = side;
        this->area = 6*side*side;
        this->volume = side*side*side;
    }
};

class Sphere: public Shape {
    public:
        double radius;

    Sphere(double radius) {
        this->radius = radius;
        this->area = 4*3.14159*radius*radius;
        this->volume = 4*3.1415*radius*radius*radius/3.0;
    }
};

int main() {
    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();


    Cat cat;
    std::cout << cat.alive << '\n';
    cat.eat();
    // cat.bark();  only in Dog class
    cat.meow();


    Cube cube(10);
    std::cout << "cube area is " << cube.area << "\n";
    std::cout << "cube volume is " << cube.volume << "\n";

    Sphere sphere(5);
    std::cout << "sphere area is " << sphere.area << "\n";
    std::cout << "sphere volume is " << sphere.volume << "\n";

    return 0;
}