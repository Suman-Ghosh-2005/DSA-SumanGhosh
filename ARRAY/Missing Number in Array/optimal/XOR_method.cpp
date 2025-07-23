#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N)
{
    int xor1 = 0, xor2 = 0;

    // XOR all numbers from 1 to N
    for (int i = 1; i <= N; i++)
        xor1 ^= i;

    // XOR all elements in the array
    for (int i = 0; i < a.size(); i++)
        xor2 ^= a[i];

    // XOR of the above two will be the missing number
    return xor1 ^ xor2;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5}; // 3 is missing
    int N = 5;

    cout << "Missing number is: " << missingNumber(arr, N) << endl;
    return 0;
}