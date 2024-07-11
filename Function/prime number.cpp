#include <iostream>
#include <cmath>
bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int number = 29;
    if (is_prime(number))
        std::cout << number << " is a prime number." << std::endl;
    else
        std::cout << number << " is not a prime number." << std::endl;
    return 0;
}
