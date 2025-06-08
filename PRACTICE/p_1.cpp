#include <bits/stdc++.h>
using namespace std;

void Hashing(int arr[], int max_val, int n)
{

    int hash[max_val + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int Query;
    cout << "enter the number of queries" << endl;
    cin >> Query;

    while(Query--){
        int qE;
        cout << "enter the element to be searched" << endl;
        cin >> qE;
        if(qE<0 || qE> max_val){
            cout << "Range E nei " << endl;
        }
        else{
            cout << "Count of " << qE << " in the array: " << hash[qE] << endl; // Print the count of n
        }
    }
}

int main()
{
    int n, max_val;
    cout << "enter the size" << endl;
    cin >> n;

    cout << " enter the maximum value among the elements" << endl;
    cin >> max_val;

    int arr[n];
    cout << "enter the elements of the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    Hashing(arr, max_val, n); // Call the Hashing function with the array, max value, and size
    return 0;
}