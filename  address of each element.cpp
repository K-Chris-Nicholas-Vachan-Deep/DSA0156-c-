#include <iostream>

int main() {
    // Initialize an array with some elements
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Display the address of each element in the array
    std::cout << "Addresses of each element in the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Address of arr[" << i << "] : " << &arr[i] << std::endl;
    }

    return 0;
}
