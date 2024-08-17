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

    for (std::string str: names) {
        std::cout << str << '\n';
    }


    char grades[] = {'A','B','C','D'};
    for (char ch: grades) {
        std::cout << ch << '\n';
    }

    return 0;
}