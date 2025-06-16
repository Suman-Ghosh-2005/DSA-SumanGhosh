#include <bits/stdc++.h>
using namespace std;

void INSERTION_SORT(int arr[], int n)
{

    for (int i = 0; i <= n-1; i++)
    {
      int is_Sorted=0;


        int j = i ;

     

        while (j >0 && arr[j-1] >arr[j])
        {

            swap(arr[j], arr[j - 1]); // Swap the elements if they are in the wrong order
            // This effectively shifts the larger element to the right 

            j--; // Move to the previous element
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