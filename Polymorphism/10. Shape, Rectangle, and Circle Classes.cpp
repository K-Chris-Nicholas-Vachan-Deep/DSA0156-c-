#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() = 0; // pure virtual function
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Rectangle r(5, 10);
    Circle c(7);
    std::cout << "Rectangle Area: " << r.area() << std::endl;
    std::cout << "Circle Area: " << c.area() << std::endl;
    return 0;
}
