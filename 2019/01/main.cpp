#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;

int getFuel(int mass);

int main() {
    ifstream file("input.txt");
    int fuelReqs = 0;
    int mass;

    while (file >> mass) {
        fuelReqs += getFuel(mass);
    }

    cout << fuelReqs << endl;
    return 0;
}

int getFuel(int mass) {
    int fuel = 0;
    fuel += mass / 3 - 2;
    if (fuel < 0) {
        return 0;
    }
    fuel += getFuel(fuel);
    return fuel;
}
