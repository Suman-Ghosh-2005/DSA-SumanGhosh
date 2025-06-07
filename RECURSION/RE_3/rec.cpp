#include<bits/stdc++.h>
using namespace std;

// this is the parameterised function to print the sum of first n natural numbers
void printsum(int n,int sum){

    if(n==0){
        cout << sum << endl;

        return;
    }
    else{

        printsum(n-1,sum+n);
    }
}
//now we will do the functional way to print the sum of first n natural numbers

int Print_sum(int n)
{
    if(n==1){
        return 1;
    }
    else{

        return n+ Print_sum(n-1);
    }
}
int main()
{
   int n=4;
   int sum = Print_sum(n); // Call the function to print the sum of first n natural numbers

   cout << sum<< endl;
    return 0;
}