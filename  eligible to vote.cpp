#include <iostream>

int main() {
    int age;
    const int votingAge = 18;

    // Prompt the user to enter their age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Check if the person is eligible to vote
    if (age >= votingAge) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        int yearsLeft = votingAge - age;
        std::cout << "You are not eligible to vote. You need to wait " << yearsLeft << " more year(s) to be eligible." << std::endl;
    }

    return 0;
}
