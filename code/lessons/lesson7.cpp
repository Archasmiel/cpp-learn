#include <iostream>
using std::cout;
using std::endl;

int main() {
    double x = (int) 3.14;
    cout << x << endl;

    char x1 = 100;
    cout << x1 << endl;
    cout << (char) 100 << endl;
    cout << (char) 105 << endl;
    cout << (char) 110 << endl;

    int correct = 8;
    int questions = 10;
    double score = correct/questions * 100;
    cout << score << "%" << endl;
    score = correct/(double)(questions) * 100;
    cout << score << "%" << endl;

    return 0;
}