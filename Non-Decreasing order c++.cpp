#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int Arr[] = { -45, 78, 23, 89, -90 };
    int n = sizeof(Arr) / sizeof(Arr[0]);
    sort(Arr, Arr + n);
    cout << "Output = { ";
    for (int i = 0; i < n; i++) {
        cout << Arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << " }" << endl;

    return 0;
}
