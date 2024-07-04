#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;
    
    // Input the string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Convert the string to uppercase
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);
    std::cout << "Uppercase: " << inputString << std::endl;

    // Convert the string to lowercase
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
    std::cout << "Lowercase: " << inputString << std::endl;

    // Find the reverse of the string
    std::reverse(inputString.begin(), inputString.end());
    std::cout << "Reverse: " << inputString << std::endl;

    return 0;
}
