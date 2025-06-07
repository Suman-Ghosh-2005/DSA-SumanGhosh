#include<bits/stdc++.h>
using namespace std;

void printsum(int n,int sum){

    if(n==0){
        cout << sum << endl;

        return;
    }
    else{

        printsum(n-1,sum+n);
    }
}
  

int main()
{
   int n=4;
    printsum(n,0);
    return 0;
}