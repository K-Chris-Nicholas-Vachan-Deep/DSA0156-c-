#include <iostream>

// Function to find the Nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    int prev2 = 0; // F(0)
    int prev1 = 1; // F(1)
    int current;

    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int n;
    std::cout << "Enter the value of N: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}

