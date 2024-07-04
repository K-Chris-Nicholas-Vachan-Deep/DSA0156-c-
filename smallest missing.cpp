#include <iostream>
#include <vector>

int findSmallestMissing(const std::vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the middle element is not equal to its index + 1, it means the missing element is to the left
        if (arr[mid] != mid + 1) {
            right = mid - 1;
        } else {
            // Otherwise, it's to the right
            left = mid + 1;
        }
    }
    // The smallest missing element is `left + 1` since array indices start from 0
    return left + 1;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 5, 6};
    int missingElement = findSmallestMissing(arr);
    std::cout << "The smallest missing element is: " << missingElement << std::endl;
    return 0;
}
