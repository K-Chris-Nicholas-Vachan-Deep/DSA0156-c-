#include <iostream>
#include <cmath>
int main() {
    double number;
    std::cout << "Enter a floating-point number: ";
    std::cin >> number;
    int roundedDown = static_cast<int>(std::floor(number));
    int roundedUp = static_cast<int>(std::ceil(number));
    int nearestInteger = static_cast<int>(std::round(number));

    std::cout << "Number rounded down (floor): " << roundedDown << std::endl;
    std::cout << "Number rounded up (ceil): " << roundedUp << std::endl;
    std::cout << "Number rounded to nearest integer: " << nearestInteger << std::endl;

    return 0;
}
