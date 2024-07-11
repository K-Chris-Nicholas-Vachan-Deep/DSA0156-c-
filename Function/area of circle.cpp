#include <iostream>
#include <cmath>

double area_of_circle(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius = 5.0;
    std::cout << "Area of circle with radius " << radius << " is " << area_of_circle(radius) << std::endl;
    return 0;
}
