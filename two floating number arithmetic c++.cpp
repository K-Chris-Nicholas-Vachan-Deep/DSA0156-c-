#include <iostream>
#include <cmath>

int main() {
    double num1, num2;

    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;

    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    std::cout << "Addition: " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 * num2 << std::endl;
    
    if (num2 != 0) {
        std::cout << "Division: " << num1 / num2 << std::endl;
        std::cout << "Modulo: " << std::fmod(num1, num2) << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }

    return 0;
}
