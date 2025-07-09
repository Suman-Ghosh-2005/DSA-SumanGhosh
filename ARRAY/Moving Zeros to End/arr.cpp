#include<bits/stdc++.h>
using namespace std;

void move_Z_End(vector<int> &arr, int n)
{
   int j =-1;
   for(int i=0 ; i<n; i++)
   {
    if(arr[i]==0)
    {
        j=i;
        break; // Found the first zero, no need to continue
    }
   }
   
   if (j == -1) return; // If no zero found, return

   for (int i = j + 1; i < n; i++)
   {
       if (arr[i] != 0)
       {
           swap(arr[i], arr[j]);
           j++;
       }
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
  
    move_Z_End(arr, n); // Assuming we want to move zeros to the end
    cout << "After the array is :" << endl;      
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}