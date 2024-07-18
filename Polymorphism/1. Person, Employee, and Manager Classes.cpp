#include <iostream>

class Person {
public:
    virtual void work() = 0; // pure virtual function
};

class Employee : public Person {
public:
    void work() override {
        std::cout << "Employee is working" << std::endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        std::cout << "Manager is managing" << std::endl;
    }
};

int main() {
    Employee e;
    Manager m;
    e.work();
    m.work();
    return 0;
}
