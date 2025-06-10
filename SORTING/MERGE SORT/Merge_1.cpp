#include <bits/stdc++.h>
using namespace std;


void MS(vector <int> & arr ,int low , int mid, int high){

    int left=low;
    int right =mid+1;
    vector <int> temp;  

    while(left<=mid && right<=high){

        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{

            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low ; i<=high;i++){
        arr[i] = temp[i-low];
    }


} 

void Merge_Sort(vector <int> & arr, int low, int high)
{

    if(low == high)
    {
        return;
    }

    int mid = (low + high )/ 2;

    Merge_Sort(arr, low, mid);
    Merge_Sort(arr, mid+1 , high);
    MS(arr,low,mid,high);
}

int main()
{
    int n;
    cout << " Enter the size of the array : ";
    cin >> n;

     vector<int> arr(n);
    cout << "Enter the " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    Merge_Sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}