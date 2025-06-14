#include<bits/stdc++.h>
using namespace std;

int printFibo(int n) {
  if(n <= 1) return n;
   
   return printFibo(n-2)+printFibo(n-1);
}


int main() {
    int n;
    cout << "Enter index: ";
    cin >> n;
    int f = printFibo(n); // nth position
    cout << f <<endl; 
    return 0;
}