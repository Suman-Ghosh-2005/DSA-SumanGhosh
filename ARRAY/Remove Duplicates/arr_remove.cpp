#include <bits/stdc++.h>

using namespace std;

int Remove_Duplicates(vector<int> &arr, int n)
{   
   int i=0;
    for(int j=1; j < n; j++)
    {
        if(arr[j] != arr[i]) 
        {
           arr[i+1] = arr[j]; // Place the unique element at the next position
           i++; // Move the index of the last unique element
        }
    }
    return i+1;
}

int main()
{   
    int n;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the  elements of array :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int Size = Remove_Duplicates(arr, n);
    
    cout << "after removing duplicate elements the new array is :"<< endl;
    for (int i = 0; i < Size; i++)
    {
        cout << arr[i] << " ";
    } 
  

    return 0;
}