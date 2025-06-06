#include <bits/stdc++.h>
using namespace std;

void Explain_stack()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.emplace(30);

    cout << st.top() << endl; // Accessing the top element of the stack which is 30
    st.pop();                 // Removing the top element of the stack
    cout << st.top() << endl; // Accessing the new top element of the stack which is 20

    cout << st.size() << endl; // Getting the size of the stack which is 2
    cout << st.empty() << endl; // Checking if the stack is empty, returns 0 (false) since it has elements

    stack<int>st1,st2;
    st1.swap(st2); // Swapping the contents of two stacks
}

int main()
{
Explain_stack();
    return 0;
}