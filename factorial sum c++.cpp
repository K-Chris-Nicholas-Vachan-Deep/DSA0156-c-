#include <iostream>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5; // Given in the sample input

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int fact = factorial(i);
        sum += fact / i;
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
