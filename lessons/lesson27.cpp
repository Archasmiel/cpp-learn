#include <iostream>

#define in std::cin
#define out std::cout

using text = std::string;

double square(double length);
double cube(double length);
text fullName(text first, text last);
text readLine();


int main() {
    double length;

    out << "Enter length: ";
    in >> length;

    out << "Area is: " << square(length) << "\n";
    out << "Volume is: " << cube(length) << "\n";
    out << std::endl;

    // full name function
    text firstName;
    text lastName;

    out << "Enter first name: ";
    firstName = readLine();
    out << "Enter last name: ";
    lastName = readLine();

    out << "Full name is: " << fullName(firstName, lastName) << "\n";
    
    return 0;
}


double square(double length) {
    double result = length*length;
    return result;
}   

double cube(double length) {
    double result = length*length*length;
    return result;
}   

text fullName(text first, text last) {
    text res;
    res.append(first).append(" ").append(last);
    return res;
}

text readLine() {
    text line;
    std::getline(in >> std::ws, line);
    return line;
}