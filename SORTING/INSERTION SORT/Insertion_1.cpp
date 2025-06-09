#include <bits/stdc++.h>
using namespace std;

void INSERTION_SORT(int arr[], int n)
{
  for(int i=0;i<n-1 ; i++){
    
    

    for(int j=0 ; j<=i+1 ; j++){

        if(arr[j]>arr[i+1]){
            swap(arr[j], arr[i+1]); // Swap adjacent elements if they are in the wrong order
            
        }

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
    INSERTION_SORT(arr, n); 

    cout << "Sorted Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the sorted array
    }

    return 0;
}