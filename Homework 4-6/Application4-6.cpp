// T.4.6.

#include <iostream>
using namespace std;

class Driver {
public:
    string name;
    string licenseData;
};

class Car {
private:
    string licenseNumber;
    string color;
    int speed;
public:
    int age;
    Driver driver;
    int NrofPersons;
};

int main()
{
    Car Lamborghini;
    Driver Stefan;
}

