#include <bits/stdc++.h>
using namespace std;

void Explain_Mset()
{

//everything is same as set, except that it allows duplicate elements
    multiset<int> ms;
    ms.insert(1);  // {1}
    ms.emplace(1); // {1, 1}
    ms.insert(1);  // {1, 1, 1} 
    ms.insert(1);  // {1, 1, 1, 1}
    ms.insert(1);  // {1, 1, 1, 1, 1}

    ms.erase(1); // removes all occurrences of the element 1

    int cnt = ms.count(1); // counts the number of occurrences of the element 1

    ms.erase(ms.find(1)); // removes one occurrence of the element 1
    // ms.erase(ms.find(1), ms.find(1)+2); 
}

int main()
{
    Explain_Mset();
    return 0;
}