#include <bits/stdc++.h>

using namespace std;


// brute force approach to left rotate an array by k places
void Left_Rotate(vector<int> &arr, int n ,int k)
{   k=k%n;
    if(k==0) return;

   int temp[k]; 
    for(int i=0; i<k; i++)
    {
        temp[i] = arr[i]; // Store the first k elements
    }
    for(int i=k; i < n; i++)
    {
           arr[i-k] = arr[i]; // Place the unique element 
       
    }
    
    for(int i=0; i<k; i++)
    {
        arr[n-k+i] = temp[i]; // Place the first k elements at the end
    }
   
}
//now the optimal approach to left rotate an array by k places
void Left_Rotate_Optimal(vector<int> &arr, int n ,int k)
{   
    k=k%n;
    if(k==0) return;

    reverse(arr.begin(), arr.begin() + k); // Reverse the first k elements
    reverse(arr.begin() + k, arr.end()); // Reverse the remaining elements
    reverse(arr.begin(), arr.end()); // Reverse the entire array
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
    int k;
    cout << "Enter the number of places to rotate left: ";
    cin >> k;
    Left_Rotate(arr, n,k);
    cout << "After left rotation, the array is :" << endl;      
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
