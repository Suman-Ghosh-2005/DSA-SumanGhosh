#include<bits/stdc++.h>
using namespace std;

void printFibo(int a, int b, int idx, int n) {
    if(idx > n) return;
    cout << a << " ";
    printFibo(b, a + b, idx + 1, n);
}

int main() {
    int n;
    cout << "Enter index: ";
    cin >> n;
    printFibo(0, 1, 0, n-1); // n-1 because index starts from 0
    return 0;
}