#include <iostream>

class Animal {
public:
    virtual void eat() = 0; // pure virtual function
};

class Herbivore : public Animal {
public:
    void eat() override {
        std::cout << "Herbivore is eating plants" << std::endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        std::cout << "Carnivore is eating meat" << std::endl;
    }
};

int main() {
    Herbivore h;
    Carnivore c;
    h.eat();
    c.eat();
    return 0;
}
