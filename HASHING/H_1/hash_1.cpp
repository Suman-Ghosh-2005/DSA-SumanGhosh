#include <iostream>
using namespace std;

void HASH(int arr[], int size, int i, int n, int count)
{

    if (i >= size)
    {
        cout << "Count of " << n << " in the array: " << count << endl; // Print the count of n
        return;                                                         // Base case: if index exceeds size, return
    }
    else
    {

        if (arr[i] == n)
        {
            count += 1; // Increment count if the element matches n
        }
        HASH(arr, size, i + 1, n, count); // Recursive call with incremented index
    }
}

int main()
{
    int arr[] = {1, 2, 3, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 1;

    HASH(arr, size, 0, n, 0); // Call the HASH function with initial index 0 and n=1
    return 0;
}