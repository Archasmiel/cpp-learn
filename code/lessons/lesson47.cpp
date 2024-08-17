#include <iostream>

int main() {
    // address-of operator &
    // dereference operator *
    std::string name = "Serhii";
    std::string *pName = &name;

    std::cout << pName << '\n';
    std::cout << *pName << '\n';


    int age = 22;
    int *pAge = &age;

    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';


    int ages[] = {22, 23, 24, 25, 26, 27};
    int *pAges = ages;

    std::cout << pAges << '\n';
    std::cout << *pAges << '\n';

    return 0;
}