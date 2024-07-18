#include <iostream>

class Employee {
public:
    virtual double calculatePay() = 0; // pure virtual function
};

class Manager : public Employee {
public:
    double calculatePay() override {
        return 5000; // Example fixed salary for simplicity
    }
};

class Engineer : public Employee {
public:
    double calculatePay() override {
        return 4000; // Example fixed salary for simplicity
    }
};

int main() {
    Manager m;
    Engineer e;
    std::cout << "Manager's Pay: " << m.calculatePay() << std::endl;
    std::cout << "Engineer's Pay: " << e.calculatePay() << std::endl;
    return 0;
}

   
