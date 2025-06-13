#include <bits/stdc++.h>

using namespace std;

int Is_Sorted(vector<int> &arr, int n)
{
    for(int i=1; i < n; i++)
    {
        if(arr[i] <= arr[i - 1]) 
        {
            return 0; // Return 0 indicating the array is not sorted
        }
    }
    return 1; // Return 1 indicating the array is sorted
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

    int is_sorted = Is_Sorted(arr, n);
    if (is_sorted)
    {
        cout << "The array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "The array is not sorted." << endl;
    }
  

    return 0;
}