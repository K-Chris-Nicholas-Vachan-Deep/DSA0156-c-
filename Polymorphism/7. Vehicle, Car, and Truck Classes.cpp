#include <iostream>

class Vehicle {
public:
    virtual void drive() = 0; // pure virtual function
};

class Car : public Vehicle {
public:
    void drive() override {
        std::cout << "Car is driving" << std::endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() override {
        std::cout << "Truck is driving" << std::endl;
    }
};

int main() {
    Car c;
    Truck t;
    c.drive();
    t.drive();
    return 0;
}
