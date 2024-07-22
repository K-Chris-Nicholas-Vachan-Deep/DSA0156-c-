#include <iostream>
#include <cmath> // For M_PI constant

using namespace std;

// Abstract class Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for area
};

// Derived class Square
class Square : public Shape {
private:
    double length;
public:
    Square(double l) : length(l) {}
    
    double area() const override {
        return length * length;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    double radius, length;
    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    
    cout << "Enter the length of the square: ";
    cin >> length;
    
    Shape* circle = new Circle(radius);
    Shape* square = new Square(length);
    
    cout << "Area of Square: " << square->area() << endl;
    cout << "Area of Circle: " << circle->area() << endl;
    
    delete circle;
    delete square;
    
    return 0;
}
