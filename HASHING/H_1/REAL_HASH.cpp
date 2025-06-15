#include <bits/stdc++.h>
using namespace std;

int main()
{    int n;
    int max_val;

    cout << "Enter the maximum value in the array: ";
    cin >> max_val; 

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[max_val + 1] = {0};


    for (int i = 0; i < n; i++)
  {
    hash[arr[i]]+=1; 
  }

  int queries;
    cout << "Enter the number of queries: ";
    cin >> queries; 
    while (queries--)
    {
        int q;
        cout << "Enter the element to query: ";
        cin >> q;
        if (q < 0 || q > max_val)
        {
            cout << "Element out of range." << endl; 
        }
        else
        {
            cout << "Count of " << q << " in the array: " << hash[q] << endl; 
        }
    }

    return 0;
}