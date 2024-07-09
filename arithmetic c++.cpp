#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    float num1, num2;
    cout << "Enter the first floating number: ";
    cin >> num1;
    cout << "Enter the second floating number: ";
    cin >> num2;
    float addition = num1 + num2;
    cout << "Addition: " << addition << endl;
    float subtraction = num1 - num2;
    cout << "Subtraction: " << subtraction << endl;
    float multiplication = num1 * num2;
    cout << "Multiplication: " << multiplication << endl;
    if (num2 != 0) {
        float division = num1 / num2;
        cout << "Division: " << division << endl;
    } else {
        cout << "Division: Undefined (division by zero)" << endl;
    }
    if (num2 != 0) {
        float modulo = fmod(num1, num2);
        cout << "Modulo: " << modulo << endl;
    } else {
        cout << "Modulo: Undefined (division by zero)" << endl;
    }

    return 0;
}
