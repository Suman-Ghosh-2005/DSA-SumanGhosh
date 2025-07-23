#include<bits/stdc++.h>
using namespace std;    


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int hash[size+1]={0};
    for(int i=0; i<size; i++)
    {
        hash[arr[i]] = 1; // Mark the number as present
    }
    for(int i=1; i<=n; i++)
    {
        if(hash[i] == 0) // If the number is not present
        {
            cout << "The missing number is: " << i << endl;
            break;
        }
    }
    return 0;
}