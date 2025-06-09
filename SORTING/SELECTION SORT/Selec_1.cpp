#include <bits/stdc++.h>
using namespace std;

void SELECTION_SORT(int arr[], int n)
{
  for(int i=0;i<=n-2 ; i++){
    int min_idx = i;

    for(int j=i ; j<=n-1 ; j++){

        if(arr[j]<arr[min_idx]){
            min_idx=j;
        }
    }
    swap(arr[i],arr[min_idx]);
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
        cin >> arr[i]; // Input the elements of the array
    }
    SELECTION_SORT(arr, n); 

    cout << "Sorted Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the sorted array
    }

    return 0;
}