#include <iostream>
#include <vector>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to print an array
void printArray(const std::vector<double>& arr) {
    std::cout << "{";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i != arr.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main() {
    // Initialize the array with Celsius values
    std::vector<double> celsiusValues = {4.4, 10, 12, 7, 70};
    std::vector<double> fahrenheitValues;

    // Convert each Celsius value to Fahrenheit and store in the new array
    for (double celsius : celsiusValues) {
        fahrenheitValues.push_back(celsiusToFahrenheit(celsius));
    }

    // Print the Fahrenheit values
    std::cout << "Fahrenheit values: ";
    printArray(fahrenheitValues);

    return 0;
}
