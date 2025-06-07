#include<bits/stdc++.h>
using namespace std;

void print_fib(int a,int b,int idx,int n){

    if(idx>n){
        return;
    }
    else{

        cout << a <<" ";
        print_fib(b,a+b,idx+1,n);
    }

}

int main(){

int n;
cout << " give a n number" << endl;
cin >> n;

print_fib(0,1,0,n-1);

return 0;

}