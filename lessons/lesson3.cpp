#include <iostream>

int main() {
    const double PI = 3.141592;
    // PI = 420.9;    cant modify
    double radius = 10;
    double circumference = 2*PI*radius;

    std::cout << circumference << std::endl;

    const int C = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}