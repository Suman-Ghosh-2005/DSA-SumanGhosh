#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int totalSum = N * (N + 1) / 2;
    int arraySum = 0;

    for (int i = 0; i < N - 1; i++) {
        arraySum += a[i];
    }

    return totalSum - arraySum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};  // Missing number is 3
    int N = 5;

    cout << "Missing number is: " << missingNumber(arr, N) << endl;
    return 0;
}