#include <bits/stdc++.h>
using namespace std;

void Hashing_MAP(int arr[], int n)
{
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // Increment the count for each element in the hash map
    }

    int Query;
    cout << "enter the number of queries" << endl;
    cin >> Query;

    while (Query--)
    {
        int qE;
        cout << "enter the element to be searched" << endl;
        cin >> qE;

        cout << "Count of " << qE << " in the input : " << hash[qE] << endl; // Print the count of n
    }
    // iterate in the map
    cout << "Elements in the map:" << endl;
    for (auto it : hash)
    {
        cout << it.first << "->" << it.second << endl; // Print each element and its count
    }
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n; // Input the size of the array
    int arr[n];
    cout << "enter the array elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the array
    }

    Hashing_MAP(arr, n); // Call the Hashing function with the array, max value, and size
    return 0;
}