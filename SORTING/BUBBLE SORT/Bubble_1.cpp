#include <bits/stdc++.h>
using namespace std;

void BuBBLE_SORT(int arr[], int n)
{
  for(int i=n-1;i>0 ; i--){
    
    int did_swap = 0; // Flag to check if any swap was made in the current pass

    for(int j=0 ; j<=i ; j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]); // Swap adjacent elements if they are in the wrong order
            did_swap = 1; // Set the flag to indicate a swap was made
        }
    }
    if(did_swap == 0) // If no swaps were made, the array is already sorted
    {
        break; // Exit the loop early
    }
    
  }

}

int main()
{
    int n;
    cout << "enter the size of Array" << endl;
    cin >> n;

    int arr[n];
    cout << " enter the elements of the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }
    BuBBLE_SORT(arr, n); 

    cout << "Sorted Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the sorted array
    }

    return 0;
}