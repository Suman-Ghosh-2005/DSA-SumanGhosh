#include<bits/stdc++.h>
using namespace std;

void  print_n(int n){

    if(n==0){
        return;
    }
    else{

        print_n(n-1); // Recursive call
        cout << n << endl;
    }

}

int main()
{
   int n=4;
  
    print_n(n); // Call the function to print the name n times
    return 0;
}