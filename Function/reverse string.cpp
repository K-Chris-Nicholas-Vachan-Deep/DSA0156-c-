#include <iostream>
#include <string>
std::string reverse_string(const std::string &s) {
    return std::string(s.rbegin(), s.rend());
}
int main() {
    std::string str = "hello";
    std::cout << "Reversed string: " << reverse_string(str) << std::endl;
    return 0;
}
