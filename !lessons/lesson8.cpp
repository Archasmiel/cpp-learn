#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    std::string name;
    cout << "Enter a name: " << endl;
    // cin >> name;    works bad with spaces
    // std::ws for earlier cin>> input
    std::getline(cin >> std::ws, name);

    int age;
    cout << "Enter age: " << endl;
    cin >> age;

    cout << "Your name is \'" << name << "\' youre " << age << " y.o." << endl;

    return 0;
}