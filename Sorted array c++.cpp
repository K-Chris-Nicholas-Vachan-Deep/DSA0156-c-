#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
