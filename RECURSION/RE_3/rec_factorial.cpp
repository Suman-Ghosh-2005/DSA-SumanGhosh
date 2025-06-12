#include<bits/stdc++.h>
using namespace std;

int  print_Factorial(int n){
if(n==0 || n==1){
    return 1 ;
}
else{
    return n* print_Factorial(n-1);
}
}

int main()
{
   int n=6;
    int factorial = print_Factorial(n); // Call the function to calculate the factorial of n
    cout << "Factorial of " << n << " is: " << factorial << endl; // Output the result


    return 0;
}