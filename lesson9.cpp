#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    cout << "max: " << z << endl;

    z = std::min(x, y);
    cout << "min: " << z << endl;

    z = pow(x, y);    
    cout << "pow x**y: " << z << endl;

    z = sqrt(x);    
    cout << "sqrt x: " << z << endl;

    z = abs(-101);    
    cout << "abs -101: " << z << endl;

    z = round(3.1415);    
    cout << "round pi: " << z << endl;

    z = floor(3.1415);    
    cout << "floor pi: " << z << endl;

    z = ceil(3.1415);    
    cout << "ceil pi: " << z << endl;

    return 0;
}