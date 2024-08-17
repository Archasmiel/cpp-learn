#include <iostream>

int main(int argc, char const *argv[])
{
    for (int i = 1 ; i <= 20 ; i++) {
        if (i == 13) {
            // stops loop
            break;
        }
        std::cout << i << '\n';
    }
    std::cout << '\n';

    for (int i = 1 ; i <= 20 ; i++) {
        if (i == 13) {
            // skips only this step
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}
