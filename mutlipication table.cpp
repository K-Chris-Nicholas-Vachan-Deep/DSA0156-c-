#include <iostream>

int main() {
    int n;

    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> n;

    std::cout << "Multiplication Table of " << n << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }

    return 0;
}
