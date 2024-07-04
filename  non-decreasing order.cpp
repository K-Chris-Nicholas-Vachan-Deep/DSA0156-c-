#include <iostream>
#include <vector>
#include <algorithm>

void printArray(const std::vector<int>& arr) {
    std::cout << "{";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i];
        if (i != arr.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main() {
    // Initialize the array
    std::vector<int> arr = {-45, 78, 23, 89, -90};

    // Sort the array in non-decreasing order
    std::sort(arr.begin(), arr.end());

    // Print the sorted array
    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
