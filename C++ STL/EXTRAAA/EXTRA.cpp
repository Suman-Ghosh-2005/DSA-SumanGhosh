#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b)
{
 if(a.second<b.second) return true; // sort by second element in ascending order
 if(a.second>b.second) return false; // if second elements are equal, sort by first element in descending order

 // they are same
 if(a.first>b.first) return true; // sort by first element in descending order
 else return false; // if first elements are equal, maintain original order
}
void Explain_EXTRA()
{

int arr[] = {3, 2, 1, 5, 2};
vector<int> v = {3, 2, 1, 5, 2};

// Using sort() to sort the array
sort(arr,arr+5);
// Using sort() to sort the vector
sort(v.begin(), v.end());

sort(arr+1, arr+4); // Sorting a subarray from index 1 to 3 (exclusive of 4)

sort(arr, arr+5, greater<int>()); // sort in descending order
sort(v.begin(), v.end(), greater<int>()); // sort vector in descending order


pair<int,int> a[]= {{1,2},{3,1},{2,1}};
/*
sort it accordinhg to the second element in ascending order if second element is same then sort according to the first element but in descending order
*/

sort(a,a+3,comp);



int num = 7;
int cnt = __builtin_popcount(num); // Correct usage
cout << "Number of set bits in " << num << ": " << cnt << endl; 

long long num1 = 15;
long long cnt1 = __builtin_popcountll(num1); // Correct usage for long long



string s="123";
sort(s.begin(), s.end()); // Sorts the string in ascending order

do{
    cout<< s<< endl;
}while(next_permutation(s.begin(), s.end()));

int maxi =*max_element(arr,arr+5); // Finds the maximum element in the array
int mini = *min_element(arr, arr+5); // Finds the minimum element in the array


}
int main()
{
    Explain_EXTRA();    
    return 0;
}