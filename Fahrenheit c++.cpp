#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of temperature values: ";
    cin >> n;
    double celsiusArray[n];
    double fahrenheitArray[n];
    cout << "Enter the Celsius values:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> celsiusArray[i];
    }
    for (int i = 0; i < n; ++i) {
        fahrenheitArray[i] = (celsiusArray[i] * 9.0 / 5.0) + 32.0;
    }
    cout << "Fahrenheit values: ";
    for (int i = 0; i < n; ++i) {
        cout << fahrenheitArray[i] << " ";
    }
    cout << endl;
    return 0;
}
