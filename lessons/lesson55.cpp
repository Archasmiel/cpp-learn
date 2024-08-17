#include <iostream>

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

enum Flavor {
    vanilla,
    chocolate,
    strawberry,
    mint
};

int main() {
    std::string today1 = "sunday";

    /*                        IS NOT WORKING with string
    switch (today1) {
        case "sunday": std::cout << "It is sunday!\n"; break;
        case "monday": std::cout << "It is monday!\n"; break;
        case "tuesday": std::cout << "It is tuesday!\n"; break;
        case "wednesday": std::cout << "It is wednesday!\n"; break;
        case "thursday": std::cout << "It is thursday!\n"; break;
        case "friday": std::cout << "It is friday!\n"; break;
        case "saturday": std::cout << "It is saturday!\n"; break;
    }
    */

    // but enums work greatly
    Day today2 = sunday;

    switch (today2) {
        case sunday: std::cout << "It is sunday!\n"; break;
        case monday: std::cout << "It is monday!\n"; break;
        case tuesday: std::cout << "It is tuesday!\n"; break;
        case wednesday: std::cout << "It is wednesday!\n"; break;
        case thursday: std::cout << "It is thursday!\n"; break;
        case friday: std::cout << "It is friday!\n"; break;
        case saturday: std::cout << "It is saturday!\n"; break;
    }

    return 0;
}   
