#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr1, arr2, intersection;
    arr1 = {1, 2, 2, 4, 5};
    arr2 = {2, 4, 5, 6, 7};

    int n1, n2;

    n1 = arr1.size();
    n2 = arr2.size();

    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                st.insert(arr1[i]);
                break;  // To avoid duplicates in case of multiple matches
            }
        }
    }

    for (auto it : st)
    {
        intersection.push_back(it);
    }

    for (auto it : intersection)
    {
        cout << it << " ";
    }

    return 0;
}