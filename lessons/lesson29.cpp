#include <iostream>

// global variables, placement's crucial
int myNum2 = 1;

void printNum();

int main() {
    // local variables
    int myNum1 = 1;
    int myNum2 = 1;

    std::cout << myNum1;
    std::cout << myNum2;  // local version
    std::cout << ::myNum2;  // global version

    printNum();

    return 0;
}

void printNum() {
    // std::cout << myNum1;    CANT SEE 
    // myNum1 belongs only to main()

    // not myNum1 from main()
    int myNum1 = 1;
    std::cout << myNum1;

    // myNum2 is global
    std::cout << myNum2;
}