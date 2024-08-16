#include <iostream>

double getTotal(double arr[], int size);

int main() {

    double prices[] = {49.99, 15.05, 75, 9.99};
    double total = getTotal(prices, sizeof(prices)/sizeof(prices[0]));
    std::cout << "Total $" << total << '\n';

    return 0;
}

// This arr is not an array
// But a pointer in memory
// So we need size to access all elements
double getTotal(double arr[], int size) {

    double res = 0;

    for (int i = 0 ; i < size ; i++) {
        res += arr[i];
    }
    
    return res;
}