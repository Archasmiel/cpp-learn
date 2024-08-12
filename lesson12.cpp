#include <iostream>

int main() {

    int month;
    std::cout << "Enter month: ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "It is " << "January" << std::endl;
            break;
        case 2:
            std::cout << "It is " << "February" << std::endl;
            break;
        case 3:
            std::cout << "It is " << "March" << std::endl;
            break;
        case 4:
            std::cout << "It is " << "April" << std::endl;
            break;
        case 5:
            std::cout << "It is " << "May" << std::endl;
            break;
        case 6:
            std::cout << "It is " << "June" << std::endl;
            break;
        case 7:
            std::cout << "It is " << "July" << std::endl;
            break;
        case 8:
            std::cout << "It is " << "August" << std::endl;
            break;
        case 9:
            std::cout << "It is " << "September" << std::endl;
            break;
        case 10:
            std::cout << "It is " << "October" << std::endl;
            break;
        case 11:
            std::cout << "It is " << "November" << std::endl;
            break;
        case 12:
            std::cout << "It is " << "December" << std::endl;
            break;
        default:
            std::cout << "It is " << "wrong month" << std::endl;
    }



    char grade;
    std::cout << "What letter grade: ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "You did great!" << std::endl;
            break;
        case 'B':
            std::cout << "You did good!" << std::endl;
            break;
        case 'C':
            std::cout << "You did okay." << std::endl;
            break;
        case 'D':
            std::cout << "You did not do good." << std::endl;
            break;
        case 'E':
            std::cout << "You did wrong!" << std::endl;
            break;
        case 'F':
            std::cout << "You did horrible!" << std::endl;
            break;
        default:
            std::cout << "Enter a normal grade!" << std::endl;
    } 

    return 0;
}