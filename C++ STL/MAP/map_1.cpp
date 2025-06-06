#include <bits/stdc++.h>
using namespace std;

void Explain_MAP()
{

    map<int,int> mp;
    // map is a container that stores key-value pairs in sorted order based on keys.
    // It allows for fast retrieval of values based on keys.
//     Each key is unique and mapped to a value.
//    The elements are stored in sorted order based on the keys (by default, in ascending order).
// You can quickly insert, find, or erase elements by key (operations are usually O(log n)).
// **************************explaination********************


map<int,pair<int,int>>mp1;
// This is a map where each key is an integer, and the value is a pair of integers.

map<pair<int,int>,int>mp2;
// This is a map where each key is a pair of integers, and the value is an integer.

mp[1]=10;

mp.emplace(3,1);
mp.insert({2,20});

mp2[{1,2}]=100;



for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<endl;

}

cout << mp[1]<<endl; // Accessing value by key

auto it = mp.find(2); // Finding an element by key

cout << it->second << endl; // Accessing value using iterator

}


void multiMap()
{


    multimap<int, string> mm;
    // multimap is a container that allows multiple values for the same key.
    // It stores key-value pairs in sorted order based on keys.
    // You can have multiple elements with the same key.

    mm.insert({1, "apple"});
    mm.insert({1, "banana"});
    mm.insert({2, "orange"});

    for (auto it : mm) {
        cout << it.first << ": " << it.second << endl;
    }

    auto range = mm.equal_range(1); // Get range of elements with key 1
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

void unorderedMap()
{
    unordered_map<int, string> um;
    // unordered_map is a container that stores key-value pairs in no particular order.
    // It allows for fast retrieval of values based on keys (average O(1) time complexity).
    // Keys must be unique.

    um[1] = "apple";
    um[2] = "banana";
    um[3] = "orange";

    for (const auto& it : um) {
        cout << it.first << ": " << it.second << endl;
    }

    cout << "Value for key 2: " << um[2] << endl; // Accessing value by key
}

// difference is unordered map time complexity is O(1) on average[in worst case could be O(n)], while map is O(log n)
int main()
{
    Explain_MAP();

    multiMap(); 
    return 0;
}