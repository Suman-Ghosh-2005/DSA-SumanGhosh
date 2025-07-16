#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr1, arr2,Visited, intersection;
    arr1 = {1, 2, 2, 4, 5};
    arr2 = {2, 4, 5, 6, 7};
    Visited = {0, 0, 0, 0, 0}; // To track visited elements in arr2
    int n1, n2;

    n1 = arr1.size();
    n2 = arr2.size();
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j] && Visited[j] == 0) // Check if not already visited
            {
                intersection.push_back(arr1[i]);
                Visited[j] = 1; // Mark this element as visited
                break;  // To avoid duplicates in case of multiple matches
            }
        }
    }
    for (auto it : intersection)
    {
        cout << it << " ";
    }
 

    return 0;
}