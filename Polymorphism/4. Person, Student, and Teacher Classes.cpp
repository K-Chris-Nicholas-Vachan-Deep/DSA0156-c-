#include <iostream>

class Person {
public:
    virtual void greet() = 0; // pure virtual function
};

class Student : public Person {
public:
    void greet() override {
        std::cout << "Student says hello" << std::endl;
    }
};

class Teacher : public Person {
public:
    void greet() override {
        std::cout << "Teacher says good morning" << std::endl;
    }
};

int main() {
    Student s;
    Teacher t;
    s.greet();
    t.greet();
    return 0;
}
