#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int num;

    num = (rand() % 6) + 1;
    std::cout << num << '\n';
    num = (rand() % 6) + 1;
    std::cout << num << '\n';
    num = (rand() % 6) + 1;
    std::cout << num << '\n';
    std::cout << '\n';

    num = (rand() % 20) + 1;
    std::cout << num << '\n';
    num = (rand() % 20) + 1;
    std::cout << num << '\n';
    num = (rand() % 20) + 1;
    std::cout << num << '\n';
    std::cout << '\n';

    return 0;
}
