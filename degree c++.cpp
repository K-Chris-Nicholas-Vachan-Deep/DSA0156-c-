#include <iostream>

// Base class Degree
class Degree {
public:
    void getDegree() {
        std::cout << "I got a Degree" << std::endl;
    }
};

// Subclass Undergraduate inheriting from Degree
class Undergraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am an Undergraduate" << std::endl;
    }
};

// Subclass Postgraduate inheriting from Degree
class Postgraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am a Postgraduate" << std::endl;
    }
};

int main() {
    Degree degree;
    Undergraduate undergraduate;
    Postgraduate postgraduate;

    // Calling functions using objects of each class
    degree.getDegree();
    undergraduate.getDegree();
    postgraduate.getDegree();

    return 0;
}
