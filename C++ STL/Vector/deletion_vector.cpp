#include <bits/stdc++.h>

using namespace std;

void Explainvector()
{
    vector<int> v= {1, 2, 3, 4, 5,6};
    
   v.erase(v.begin()+1); // deleates the element 2

   v.erase(v.begin()+2,v.begin()+4); // deletes the elements 3 and 4
    // v.erase(v.begin(),v.end()); // deletes all the elements in the vector
    // v.clear(); // clears the vector, making it empty
}

int main()
{
    Explainvector();
    return 0;
}