#include <iostream>

class Animal {
public:
    virtual void speak() = 0; // pure virtual function
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Cat says meow" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Dog says bark" << std::endl;
    }
};

int main() {
    Cat c;
    Dog d;
    c.speak();
    d.speak();
    return 0;
}
