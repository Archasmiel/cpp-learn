#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;

    // using namespace first;
    // using namespace second;
    // using namespace std;  very likehood for error
    // using std::cout;
    // using std::endl;


    return 0;
}