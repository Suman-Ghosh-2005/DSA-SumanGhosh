#include <bits/stdc++.h>
using namespace std;

void Explain_DQ()
{
    deque<int> dq;

    dq.push_back(10); // adds 10 to the back
    dq.push_front(20); // adds 20 to the front
    dq.emplace_back(30); // adds 30 to the back
    dq.emplace_front(40); // adds 40 to the front

    cout << "Elements in deque: ";
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " "; // prints the elements of the deque
    }
    cout << endl;

    dq.pop_back(); // removes the last element
    dq.pop_front(); // removes the first element

    cout << "After popping, elements in deque: ";
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " "; // prints the elements of the deque after popping
    }
    
}

int main()
{

    return 0;
}