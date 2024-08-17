#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum) {
        case 1:
            std::cout << "You won sticker!\n";
            break;
        case 2:
            std::cout << "You won giftcard!\n";
            break;
        case 3:
            std::cout << "You won floppa!\n";
            break;
        case 4:
            std::cout << "You won lunch!\n";
            break;
        case 5:
            std::cout << "You won ticket!\n";
            break;
    }

    return 0;
}
