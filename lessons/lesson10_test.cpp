#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

using num = double;

int main() {
    num a, b, c;

    cout << "--- Hypothenuze calculator ---" << endl;
    cout << "Type first side: ";
    cin >> a;
    cout << "Type second side: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Hypothenuze is: " << c << endl;

    return 0;
}