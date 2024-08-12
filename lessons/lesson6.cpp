#include <iostream>
using std::cout;
using std::endl;

int main() {
    // ++++++++
    int students = 20;
    cout << students << endl;

    students = students + 1;
    cout << students << endl;

    students += 1;
    cout << students << endl;

    students++;
    cout << students << endl;

    ++students;
    cout << students << endl;
    cout << endl;

    // -------
    students = 20;
    cout << students << endl;

    students = students - 1;
    cout << students << endl;

    students -= 1;
    cout << students << endl;

    students--;
    cout << students << endl;

    --students;
    cout << students << endl;
    cout << endl;


    // *******
    students = 20;
    cout << students << endl;

    students = students * 2;
    cout << students << endl;

    students *= 2;
    cout << students << endl;
    cout << endl;


    // division
    students = 20;
    cout << students << endl;

    students = students / 2;
    cout << students << endl;

    students /= 2;
    cout << students << endl;

    double students1 = students / 2;
    cout << students1 << endl;
    students1 = students1 / 2;
    cout << students1 << endl;
    students1 = students1 / 2;
    cout << students1 << endl;
    students1 = students1 / 2;
    cout << students1 << endl;
    cout << endl;

    return 0;
}