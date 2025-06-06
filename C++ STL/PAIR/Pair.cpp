#include <bits/stdc++.h>

using namespace std;

void ExplainPair()
{
    // pair<int , int > p = {1,3};

    // cout << p.first << " "<< p.second;
    // pair <int,pair<int,int>> p= {1,{5,6}}; 

    // cout << p.first << " "<< p.second.second << p.second.first;

    pair<int,int> arr[]={{1,3},{2,5},{8,9}};
    cout << arr[1].second;
}

int main()
{
    ExplainPair();
    return 0;
}