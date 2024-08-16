#include <iostream>

int main() {
    // nullptr

    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if (pointer == nullptr) {
        std::cout << "Pointer is null" << pointer;
    } else {
        std::cout << "Pointer valid";
    }

    return 0;
}