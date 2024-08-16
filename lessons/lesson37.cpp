#include <iostream>

int searchInArray(int array[], int size, int search);
int searchInArray(std::string array[], int size, std::string search);

int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Searching a number: ";
    std::cin >> myNum;

    index = searchInArray(numbers, size, myNum);

    if (index == -1) 
        std::cout << "Not found in array!\n";
    else 
        std::cout << "Index is: " << index << '\n';


    std::string foods[] = {"Banana", "Milk", "Eggs", "Bread"};
    int foodSize = sizeof(foods)/sizeof(foods[0]);
    int foodIndex;
    std::string myFood;
    std::cout << "Searching a food: ";
    std::cin >> myFood;

    foodIndex = searchInArray(foods, foodSize, myFood);

    if (foodIndex == -1) 
        std::cout << "Not found in array!\n";
    else 
        std::cout << "Index is: " << foodIndex << '\n';

    return 0;
}

int searchInArray(int array[], int size, int search) {
    for (int i = 0 ; i < size ; i++) {
        if (array[i] == search) {
            return i;
        }
    }
    return -1;
}

int searchInArray(std::string array[], int size, std::string search) {
    for (int i = 0 ; i < size ; i++) {
        if (array[i] == search) {
            return i;
        }
    }
    return -1;
}