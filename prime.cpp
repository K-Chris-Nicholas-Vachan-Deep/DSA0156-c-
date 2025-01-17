#include <iostream>
#include <cmath> 

using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int num;

  cout << "Enter a positive integer: ";
  cin >> num;

  if (isPrime(num)) {
    cout << num << " is a prime number." << endl;
  } else {
    cout << num << " is not a prime number." << endl;
  }

  return 0;
}
