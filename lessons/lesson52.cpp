#include <iostream>

// T - Thing
template <typename T, typename U>
auto max(T x, U y) {
    return (x > y) ? x : y;
}

// auto - decides for user
// T and U may be different types
// and then can used as Generics in Java

int main() {
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.222, 2.333) << '\n';
    std::cout << max(3, 2.333) << '\n';

    return 0;
}   