#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    int num;
    int guess;
    int tries;

    srand(time(0));
    num = (rand() % 100) + 1;

    std::cout << "***** Number guessing game *****\n";

    do {
        std::cout << "Guess (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too big!\n";
        } 
        else if (guess < num) {
            std::cout << "Too low!\n";
        }
        else {
            std::cout << "Correct! Tries: " << tries << "\n";
            break;
        }
    } while(true);


    return 0;
}
