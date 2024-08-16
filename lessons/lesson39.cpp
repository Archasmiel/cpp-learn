#include <iostream>

int main() {

    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    for (std::string str: foods) {
        std::cout << str << ' ';
    }
    std::cout << '\n';

    const int size = 99;
    std::string foods2[size];
    fill(foods2, foods2+(size/3), "pizza");
    fill(foods2+(size/3), foods2+(size/3*2), "hamham");
    fill(foods2+(size/3*2), foods2+size, "burbur");
    for (std::string str: foods2) {
        std::cout << str << ' ';
    }
    std::cout << '\n';

    return 0;
}