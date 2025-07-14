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
    
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionArr.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            unionArr.push_back(arr2[j]);
            j++;
        } else {
            unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }   
    while (i < n1) {
        unionArr.push_back(arr1[i]);
        i++;
    }   
    while (j < n2) {
        unionArr.push_back(arr2[j]);
        j++;
    }
    cout << "Union of two sorted arrays is: ";
    for (int k = 0; k < unionArr.size(); k++) {
        cout << unionArr[k] << " ";
    }
    cout << endl;
    

    return 0;
}