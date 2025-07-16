#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1, arr2, intersectionArr;
    arr1 = {1, 3, 3, 4, 5}; 
    arr2 = {3, 4, 5, 6, 7};
    int n1, n2;
    n1 = arr1.size();
    n2 = arr2.size();   
    
    int i = 0, j = 0;

    while( i < n1 && j < n2 )
    {

        if(arr1[i]< arr2[j])
        {
            
            i++;
        }
        else if(arr1[i]> arr2[j])
        {
           
            j++;
        }
        else
        {
            intersectionArr.push_back(arr1[i]);
            i++;
            j++;
        }

    }


    cout << "intersection of two sorted arrays is: ";

   
    for(auto it :intersectionArr)
    {
        cout << it << " ";
    }

    cout << endl;


    return 0;
}