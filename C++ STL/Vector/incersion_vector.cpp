#include <bits/stdc++.h>

using namespace std;

void Explainvector()
{
    vector<int> v= {1, 2, 3, 4, 5};
    vector<int> v1= {10, 20, 30, 48, 57};
    v.insert(v.begin()+3,80); // inserts 80 at index 3
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << " "; // prints the elements of the vector
    // }


    v.insert(v.begin()+1, 3 ,5); // inserts 3 copies of 5 at index 1
    
   vector<int>copy(2,5);
   v.insert(v.begin(),copy.begin(),copy.end());

   v.pop_back(); // removes the last element from the vector
   
   v.swap(v1); // swaps the contents of v and v1
   v.clear(); // clears the vector, making it empty

   cout<< v.empty() << endl; // checks if the vector is empty, returns 1 if empty, 0 otherwise
}

int main()
{
    Explainvector();
    return 0;
}