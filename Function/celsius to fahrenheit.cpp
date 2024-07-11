#include <iostream>

double celsius_to_fahrenheit(double c) {
    return (c * 9/5) + 32;
}

double fahrenheit_to_celsius(double f) {
    return (f - 32) * 5/9;
}

int main() {
    double celsius = 25.0;
    double fahrenheit = 77.0;
    
    std::cout << celsius << " Celsius is " << celsius_to_fahrenheit(celsius) << " Fahrenheit." << std::endl;
    std::cout << fahrenheit << " Fahrenheit is " << fahrenheit_to_celsius(fahrenheit) << " Celsius." << std::endl;
    return 0;
}
