#include <bits/stdc++.h>
using namespace std;

void Explain_queue()
{
 queue<int> q;
    q.push(10); // adds 10 to the back of the queue
    q.push(20); // adds 20 to the back of the queue
    q.emplace(30); // adds 30 to the back of the queue
    
    q.back(); // returns the last element of the queue, which is 30
    q.front(); // returns the first element of the queue, which is 10   

    q.back()+=5; // modifies the last element of the queue, making it 35

    q.pop(); // removes the first element of the queue, which is 10
    cout << "Elements in queue after popping: ";    
    while (!q.empty()) {
        cout << q.front() << " "; // prints the elements of the queue
        q.pop(); // removes the front element
    }
  
}

int main()
{
Explain_queue();
    return 0;
}