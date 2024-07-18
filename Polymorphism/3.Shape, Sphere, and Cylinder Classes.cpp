#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() = 0; // pure virtual function
    virtual double volume() = 0; // pure virtual function
};

class Sphere : public Shape {
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double area() override {
        return 4 * M_PI * radius * radius;
    }
    double volume() override {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
};

class Cylinder : public Shape {
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double area() override {
        return 2 * M_PI * radius * (radius + height);
    }
    double volume() override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    Sphere s(5);
    Cylinder c(3, 7);
    std::cout << "Sphere Area: " << s.area() << ", Volume: " << s.volume() << std::endl;
    std::cout << "Cylinder Area: " << c.area() << ", Volume: " << c.volume() << std::endl;
    return 0;
}
