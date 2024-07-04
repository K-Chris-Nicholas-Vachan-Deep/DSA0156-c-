#include <iostream>

int main() {
    int n;
    int sum = 0;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Calculate the sum of numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the sum
    std::cout << "Sum of numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
