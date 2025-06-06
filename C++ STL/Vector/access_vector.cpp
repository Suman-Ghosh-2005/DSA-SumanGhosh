#include <bits/stdc++.h>
using namespace std;

void acc()
{

    vector<int> v;
    v.emplace_back(12);
    v.push_back(100);
    v.push_back(200);
    v.emplace_back(300);

    cout << "Elements in vector: " << endl;

    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << endl;
    }
}
void access_vector()
{

    vector<int> v = {1, 2, 3, 4, 5};

    // Accessing elements using at()
    cout << "Element at index 2 using at(): " << v.at(2) << endl;

    // Accessing elements using []
    cout << "Element at index 3 using []: " << v[3] << endl;

    // Accessing first and last elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // Accessing the data pointer
    cout << "Data pointer: " << v.data() << endl;
}
int main()
{
    access_vector();
    acc();
    return 0;
}