#include <iostream>

class Stove {
    public:
        int temperature = 0;

        // getter
        int getFuel() {
            return fuel;
        }

        // method
        void addFuel() {
            fuel += 10;
        }

        // setter
        void setFuel(int fuel) {
            this->fuel = (fuel > 100) ? 100 : fuel;
        }
    private:
        int fuel = 0;
};

int main() {
    Stove stove;

    stove.temperature = 10000000;
    std::cout << "Temperature of stove: " << stove.temperature << '\n';

    // stove.fuel = 100;  private
    std::cout << "Fuel inside stove: " << stove.getFuel() << '\n';

    stove.addFuel();
    std::cout << "Fuel inside stove: " << stove.getFuel() << '\n';

    stove.setFuel(100000000);
    std::cout << "Fuel inside stove: " << stove.getFuel() << '\n';


    return 0;
}