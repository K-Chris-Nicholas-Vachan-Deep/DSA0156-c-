#include <iostream>
#include <vector>
#include <limits>

std::pair<int, int> find_min_max(const std::vector<int> &arr) {
    if (arr.empty())
        return {std::numeric_limits<int>::max(), std::numeric_limits<int>::min()};

    int min_element = arr[0];
    int max_element = arr[0];
    for (int num : arr) {
        if (num < min_element)
            min_element = num;
        if (num > max_element)
            max_element = num;
    }
    return {min_element, max_element};
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, -1, 10};
    auto [min_val, max_val] = find_min_max(arr);
    std::cout << "Minimum element: " << min_val << ", Maximum element: " << max_val << std::endl;
    return 0;
}
