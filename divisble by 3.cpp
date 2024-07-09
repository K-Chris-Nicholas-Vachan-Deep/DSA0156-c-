#include <iostream>

using namespace std;

int main() {
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  // Ternary operator to check divisibility by 3
  string result = (num % 3 == 0) ? "Divisible by 3" : "Not divisible by 3";

  cout << num << " is " << result << endl;

  return 0;
}
