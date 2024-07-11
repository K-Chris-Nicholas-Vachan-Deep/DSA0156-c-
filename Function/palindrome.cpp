#include <iostream>
#include <string>
#include <algorithm>

bool is_palindrome(const std::string &s) {
    std::string str = s;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    std::string rev = std::string(str.rbegin(), str.rend());
    return str == rev;
}

int main() {
    std::string str = "A man a plan a canal Panama";
    if (is_palindrome(str))
        std::cout << "\"" << str << "\" is a palindrome." << std::endl;
    else
        std::cout << "\"" << str << "\" is not a palindrome." << std::endl;
    return 0;
}
