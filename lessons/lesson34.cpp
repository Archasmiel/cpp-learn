#include <iostream>

int main() {

    std::string names[] = {"Bro", "Bro1", "Bro2", "Bro3"};
    /* 
        NOT LIKE THIS
    std::cout << names[0] << '\n';
    std::cout << names[1] << '\n';
    std::cout << names[2] << '\n';
    std::cout << names[3] << '\n';
    */

    for (int i = 0 ; i < sizeof(names)/sizeof(names[0]) ; i++) {
        std::cout << names[i] << '\n';
    }


    char grades[] = {'A','B','C','D'};
    for (int i = 0 ; i < sizeof(grades)/sizeof(grades[0]) ; i++) {
        std::cout << grades[i] << '\n';
    }

    return 0;
}