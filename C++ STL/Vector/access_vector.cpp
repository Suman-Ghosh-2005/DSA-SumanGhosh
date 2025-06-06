#include <bits/stdc++.h>
using namespace std;

// void acc()
// {

//     vector<int> v;
//     v.emplace_back(12);
//     v.push_back(100);
//     v.push_back(200);
//     v.emplace_back(300);

//     cout << "Elements in vector: " << endl;

//     for (int i = 0; i < v.size(); i++)
//     {

//         cout << v[i] << endl;
//     }
// }
// void access_vector()
// {

//     vector<int> v = {1, 2, 3, 4, 5};

//     // Accessing elements using at()
//     cout << "Element at index 2 using at(): " << v.at(2) << endl;

//     // Accessing elements using []
//     cout << "Element at index 3 using []: " << v[3] << endl;

//     // Accessing first and last elements
//     cout << "First element: " << v.front() << endl;
//     cout << "Last element: " << v.back() << endl;

//     // Accessing the data pointer
//     cout << "Data pointer: " << v.data() << endl;
// }

void UseBeginEnd()
{  
    vector<int> v = {1,2,3,4,5};
    vector<int> :: iterator it = v.begin();
    
    cout << *(it) << endl; // Accessing first element using iterator

    it=it+1;
    cout << *(it) << endl;

    vector<int> :: iterator it = v.end(); // remember  that this end() will always be a memory location right after the last element.
    vector<int> :: iterator it = v.rbegin();//

    vector<int> :: iterator it = v.rend(); // this rend() will always be a memory location right before the first element.
   
    cout<<v.at(0)<<endl; // Accessing the first element using at()

    cout<< v.back() << endl; // Accessing the last element using back()
    cout<<v.front() << endl; // Accessing the first element using front()



        vector<int> v = {1, 2, 3, 4, 5};

    // Using begin() and end() to iterate through the vector
    cout << "Elements using begin() and end(): ";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Using rbegin() and rend() for reverse iteration
    cout << "Elements in reverse order using rbegin() and rend(): ";
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";

    }
    cout << endl;
}




int main()
{
    // access_vector();
    // acc();
    UseBeginEnd();
    return 0;
}