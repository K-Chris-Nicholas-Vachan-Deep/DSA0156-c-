#include <iostream>
#include<cmath>
class Shape {
public:
    virtual double area() = 0; // pure virtual function
    virtual double perimeter() = 0; // pure virtual function
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
    double perimeter() override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
    double a, b, c; // sides
public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}
    double area() override {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double perimeter() override {
        return a + b + c;
    }
};

int main() {
    Rectangle r(5, 10);
    Triangle t(3, 4, 5);
    std::cout << "Rectangle Area: " << r.area() << ", Perimeter: " << r.perimeter() << std::endl;
    std::cout << "Triangle Area: " << t.area() << ", Perimeter: " << t.perimeter() << std::endl;
    return 0;
}
