#include<bits/stdc++.h>
using namespace std;

void move_Z_End(vector<int> &arr, int n, int k)
{
    int j = 0; // Pointer for the next non-zero element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != k) // If the current element is not zero
        {
            arr[j++] = arr[i]; // Place it at the next position
        }
    }
    // Fill the remaining positions with zeros
    while (j < n)
    {
        arr[j++] = k;
    }
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
  
    move_Z_End(arr, n,k);
    cout << "After the array is :" << endl;      
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}