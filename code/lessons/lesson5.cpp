#include <iostream>
#include <vector>
using std::cout;
using std::endl;

// typedef std::vector<std::pair<std::string, int>> list_t;
// typedef std::string text_t;
// typedef int num_t;
using text_t = std::string;
using num_t = int;

int main() {
    // list_t pairlist;

    text_t firstName = "Serhii";
    num_t age = 22;
    cout << firstName << endl;
    cout << age << endl;

    return 0;
}