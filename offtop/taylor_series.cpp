#include <iostream>
#include <cmath>
#include <functional>

float factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    float res = 1;
    for (float i = 2 ; i <= n ; i++) {
        res *= i;
    }
    return res;
}

float approx(int n, float x, std::function<float(float)> funcs[], int period) {
    int temp = 0;
    float res = 0;
    for (float i = 0 ; i <= n ; i++) {
        float div_res = 1/factorial(i);
        float func_res = funcs[temp](0);
        float plain_res = std::pow(x, i);
        res += div_res * func_res * plain_res;
        //std::cout << div_res * func_res * plain_res << " ";
        temp = (temp+1) % period;
    }
    return res;
}


int main() {
    std::function<float(float)> funcs1[] = {
        [](float x) { return std::sin(x); },
        [](float x) { return std::cos(x); },
        [](float x) { return -std::sin(x); },
        [](float x) { return -std::cos(x); }
    }; 

    std::function<float(float)> funcs[] = {
        [](float x) { return std::cos(x); },
        [](float x) { return -std::sin(x); },
        [](float x) { return -std::cos(x); },
        [](float x) { return std::sin(x); }
    }; 

    int period = sizeof(funcs)/sizeof(funcs[0]);
    for (int i = 1 ; i < 15 ; i+=1) {
        float res = approx(i, -M_PI/2, funcs, period);
        float err = res-std::cos(-M_PI/2);
        std::cout << i << ":" << err << std::endl;
    }
    
    
    return 0;
}