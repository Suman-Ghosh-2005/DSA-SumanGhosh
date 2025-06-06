#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

void print(){
 if(cnt ==1){
    return;
 }
 else{

    cout << "hi" << endl;

    cnt++;
    print(); // Recursive call
 }
}

int main()
{
 
print();

    return 0;

}