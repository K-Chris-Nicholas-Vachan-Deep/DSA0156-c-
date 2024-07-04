#include <iostream>

using namespace std;

int findMissingElement(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i) {
            return i;
        }
    }
    return n;  
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the sorted natural numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int missingElement = findMissingElement(arr, n);

    cout << "The smallest missing element is: " << missingElement << endl;

    return 0;
}
