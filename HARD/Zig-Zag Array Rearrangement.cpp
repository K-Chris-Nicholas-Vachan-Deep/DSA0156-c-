#include <iostream>
using namespace std;

void zigZagArray(int arr[], int n) {
    bool flag = true; // true indicates "<" relation expected, false indicates ">" relation expected

    for (int i = 0; i < n - 1; ++i) {
        if (flag) {
            // "less than" relation expected
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        } else {
            // "greater than" relation expected
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        flag = !flag; // toggle flag
    }
}

int main() {
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    zigZagArray(arr, n);
    
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
