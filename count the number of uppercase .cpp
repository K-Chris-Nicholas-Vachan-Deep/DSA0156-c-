#include <iostream>
#include <string>

// Function to count the number of uppercase alphabets in a string
int countUppercaseAlphabets(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        if (isupper(ch)) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string str = "C++ is a Programming Language";

    int uppercaseCount = countUppercaseAlphabets(str);
    std::cout << "The number of uppercase alphabets in the string is: " << uppercaseCount << std::endl;

    return 0;
}
