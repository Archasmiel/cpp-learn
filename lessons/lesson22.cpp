#include <iostream>

int main(int argc, char const *argv[])
{
    // not nested
    for (int i = 1 ; i <= 10 ; i++) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    //nested
    for (int i = 1 ; i <= 3 ; i++) {
        for (int j = 1 ; j <= 10 ; j++) {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';

    // printing square of symbols
    int rows;
    int columns;
    char symbol;

    std::cout << "Rows: ";
    std::cin >> rows;

    std::cout << "Columns: ";
    std::cin >> columns;

    std::cout << "Symbol: ";
    std::cin >> symbol;

    for (int i = 0 ; i < rows ; i++) {
        for (int j = 0 ; j < columns ; j++) {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    std::cout << '\n';

    return 0;
}
