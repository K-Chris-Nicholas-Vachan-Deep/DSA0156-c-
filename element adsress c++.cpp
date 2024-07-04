#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "Addresses of elements in the array:" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": Address = " << &arr[i] << std::endl;
    }

    return 0;
}
