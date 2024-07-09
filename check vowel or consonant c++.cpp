#include <iostream>

int main() {
    char c;
    bool isVowel = false;

    std::cout << "Enter a character: ";
    std::cin >> c;
    c = std::tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        isVowel = true;
    }

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (isVowel) {
            std::cout << c << " is a vowel." << std::endl;
        } else {
            std::cout << c << " is a consonant." << std::endl;
        }
    } else {
        std::cout << c << " is not an alphabet character." << std::endl;
    }

    return 0;
}
