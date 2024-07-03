#include <iostream>
#include <cmath>

class Triangle {
public:
    int ab() {
        double a = 3, b = 4, c = 5;
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        double perimeter = a + b + c;

        std::cout << "area of triangle:" << area << " square units" << std::endl;
        std::cout << "perimetre of triangle: " << perimeter << " units" <<  std::endl;
    };
};

int main() {
    Triangle t;
    t.ab();
    return 0;
}