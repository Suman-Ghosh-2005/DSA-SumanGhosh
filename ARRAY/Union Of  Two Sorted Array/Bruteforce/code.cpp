#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1, arr2, unionArr;
    arr1 = {1, 2, 3, 4, 5};
    arr2 = {3, 4, 5, 6, 7};
    int n1, n2;
    n1 = arr1.size();
    n2 = arr2.size();

    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    for ( auto it : st)
    {
        unionArr.push_back(it);
    }
    cout << "Union of two sorted arrays is: ";
    for (int i = 0; i < unionArr.size(); i++)
    {
        cout << unionArr[i] << " ";
    }       
    cout << endl;
    

    return 0;
}