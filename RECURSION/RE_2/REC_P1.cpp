#include<bits/stdc++.h>
using namespace std;

void  print_n(int i ,int n){

    if(i>n){
        return;
    }
    else{

        cout << i << endl;

        print_n(i+1,n); // Recursive call
    }

}
void print_descending(int n){
    if(n==0){
        return;
    }
    else{
        cout << n << endl;
        print_descending(n-1); // Recursive call
    }
}

int main()
{
   int n=4;
//    cout << "Enter the number of times to print the name: ";
//    cin>> n; // Input the number of times to print the name
    // print_n(1,n); // Call the function to print the name n times
    print_descending(n); // Call the function to print numbers in descending order
    return 0;
}