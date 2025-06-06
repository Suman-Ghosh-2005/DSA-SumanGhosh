#include <bits/stdc++.h>
using namespace std;

void Explain_queue()
{
    
priority_queue<int> pq; // Max-Heap by default
    pq.push(10);
    pq.push(20);
    pq.push(15);
    
    cout << "Top element (Max): " << pq.top() << endl; // Should print 20
    
    pq.pop(); // Removes the top element (20)
    
    cout << "Top element after pop: " << pq.top() << endl; // Should print 15
    
    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(15);
    
    cout << "Top element (Min): " << min_pq.top() << endl; // Should print 10

    
}

int main()
{
Explain_queue();
    return 0;
}