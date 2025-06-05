#include <bits/stdc++.h>

using namespace std;

void ExplainPair()
{
vector<int> v ;

v.push_back(5);

v.emplace_back(2); // generally emplace_back is faster than push_back.
}

int main()
{
    ExplainPair();
    return 0;
}