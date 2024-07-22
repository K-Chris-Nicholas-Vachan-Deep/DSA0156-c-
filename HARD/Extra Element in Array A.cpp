#include <iostream>
using namespace std;

void EXTRA_ELE(int A[], int B[], int N) {
    int extraElement = 0;
    
    // XOR all elements of array A
    for (int i = 0; i < N; ++i) {
        extraElement ^= A[i];
    }
    
    // XOR all elements of array B
    for (int i = 0; i < N - 1; ++i) {
        extraElement ^= B[i];
    }
    
    // The result will be the extra element in array A
    cout << "Extra element in array A is: " << extraElement << endl;
}

int main() {
    int A[] = {14, 21, 5, 19, 8, 4, 23, 11};
    int B[] = {23, 8, 19, 4, 14, 11, 5};
    int N = sizeof(A) / sizeof(A[0]);
    
    EXTRA_ELE(A, B, N);

    return 0;
}
