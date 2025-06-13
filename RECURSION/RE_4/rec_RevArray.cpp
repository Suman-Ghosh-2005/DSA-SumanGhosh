#include <bits/stdc++.h>
using namespace std;

void RevArray(int n[], int size, int i)
{

    if (i > size / 2)
    {

        for (int j = 0; j < size; j++)
        {

            cout << n[j] << " ";
        }
    }
    else
    {

        swap(n[i], n[size - 1 - i]);
        RevArray(n, size, i + 1); // Recursive call with incremented index
    }
}

int main()
{
    int n[5] = {1, 2, 3, 4, 5};
    int size = sizeof(n) / sizeof(n[0]); // Calculate the size of the array
    RevArray(n, size, 0);                // Call the function to reverse the array

    return 0;
}