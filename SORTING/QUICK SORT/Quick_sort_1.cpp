#include<bits/stdc++.h>
using namespace std;

int QS(vector <int> &arr, int low, int high){


    int pivot =arr[low]; // Choosing the first element as the pivot
    int i=low, j= high;
    while(i < j)
    {
        while(arr[i] <= pivot && i < high) // Move i to the right until an element greater than pivot is found
        {
            i++;
        }
        while(arr[j] > pivot) // Move j to the left until an element less than or equal to pivot is found
        {
            j--;
        }
        if(i < j) // If i is still less than j, swap the elements at i and j
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]); // Place the pivot in its correct position
    return j; // Return the index of the pivot

}
void QUICK_SORT(vector <int> & arr, int low, int high)
{
    if (low < high)
    {
      
       
     int partition_idx = QS(arr, low , high);


        QUICK_SORT(arr, low, partition_idx - 1); // Recursively sort elements before partition
        QUICK_SORT(arr, partition_idx + 1, high); // Recursively sort elements after partition
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the array
    }

    QUICK_SORT(arr, 0, n - 1); // Call the quick sort function

    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the sorted array
    }
    
    return 0;
}