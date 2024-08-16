#include <iostream>

using text = std::string;

void print(text &x, text &y);
void swap(text &x, text &y);

int main() {
    text x = "Kool-Aid";
    text y = "Water";

    print(x, y);
    swap(x, y);
    print(x, y);        

    return 0;
}

void print(text &x, text &y) {
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
    std::cout << "X address: " << &x << "\n";
    std::cout << "Y address: " << &y << "\n";
}

// & - memory address
// if not written, there'll be,
// copy of variable - not original one
void swap(text &x, text &y) {
    // switching two copies
    std::cout << "X address: " << &x << "\n";
    std::cout << "Y address: " << &y << "\n";
    text temp;
    temp = x;
    x = y;
    y = temp;
}
