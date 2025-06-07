#include <iostream>
using namespace std;

int main()
{    int n;
    int max_val;


    cout << "Enter the maximum value in the array: ";
    cin >> max_val; // Input the maximum value in the array


    cout << "Enter the size of the array: ";
    cin >> n; // Input the size of the array



    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the array
    }

    //precompute


    int hash[max_val + 1] = {0};// Create a hash array initialized to 0


    for (int i = 0; i < n; i++)
  {
    hash[arr[i]]+=1; // Increment the count for each element in the hash array
  }

  int queries;
    cout << "Enter the number of queries: ";
    cin >> queries; // Input the number of queries
    while (queries--)
    {
        int q;
        cout << "Enter the element to query: ";
        cin >> q; // Input the element to query
        if (q < 0 || q > max_val)
        {
            cout << "Element out of range." << endl; // Check if the queried element is out of range
        }
        else
        {
            cout << "Count of " << q << " in the array: " << hash[q] << endl; // Output the count of the queried element
        }
    }

    return 0;
}