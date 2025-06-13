#include <bits/stdc++.h>

using namespace std;

void Left_Rotate(vector<int> &arr, int n)
{   
   int temp=arr[0]; // Store the first element
    for(int i=1; i < n; i++)
    {
           arr[i-1] = arr[i]; // Place the unique element 
       
    }
    arr[n-1] = temp; // Place the first element at the end
   
}

int main()
{   
    int  n;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the  elements of array :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Left_Rotate(arr, n);
    cout << "After left rotation, the array is :" << endl;      
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

  

    return 0;
}