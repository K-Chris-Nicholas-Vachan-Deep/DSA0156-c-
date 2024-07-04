#include <iostream>
using namespace std;
int main() {
    int age;
    const int votingAge = 18;

    cout << "Enter the person's age: ";
    cin >> age;

    if (age >= votingAge) {
        cout << "The person is eligible to vote." << endl;
    } else {
        int yearsLeft = votingAge - age;
        cout << "The person is not eligible to vote." << endl;
        cout << "They will be eligible to vote in " << yearsLeft << " year(s)." << endl;
    }

    return 0;
}
