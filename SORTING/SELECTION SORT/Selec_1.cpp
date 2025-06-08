#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the array
    }
 for (int i = 0; i <=n-2; i++)
 {
    int min_idx =i;
    for(int j=i ; j <=n-1;j++){

        if(arr[j]<arr[min_idx]){
            min_idx = j; // Find the index of the minimum element
        }
    }
    if(min_idx!=i){
        swap(arr[i], arr[min_idx]); // Swap the found minimum element with the first element
    }
 }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the sorted array
    }
 


    return 0;
}