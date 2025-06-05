#include <bits/stdc++.h>

using namespace std;

void ExplainPair()
{
    vector<int> v;

    v.push_back(5);

    v.emplace_back(2); // generally emplace_back is faster than push_back.

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // emplace_back constructs the pair in place, which can be more efficient.

    vector<int> v(5,100); // creates a vector of size 5, each initialized to 100


    vector<int> v(5); // creates a vector of size 5, each initialized to 0

    vector<int> v1(5,10);

    vector<int> v2(v1); // creates a copy of v1


}

int main()
{
    ExplainPair();
    return 0;
}