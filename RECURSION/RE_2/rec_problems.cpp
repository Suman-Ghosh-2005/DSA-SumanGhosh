#include<bits/stdc++.h>
using namespace std;

void  print_name(int n){

    if(n==0){
        return;
    }
    else{

        cout << "Suman Ghosh" << endl;

        print_name(n-1); // Recursive call
    }

}

int main()
{
   int n=5;
    print_name(n); // Call the function to print the name n times
    return 0;
}