#include <iostream>
#include <string>

int count_elements(const std::string &s) {
    return s.size();
}

int main() {
    std::string str = "hello";
    std::cout << "Number of elements in string: " << count_elements(str) << std::endl;
    return 0;
}
