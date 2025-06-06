#include <bits/stdc++.h>
using namespace std;

void Explain_set()
{
    // set is a container that stores unique elements in a sorted order.
    set<int> s;
    s.insert(1);  // {1}
    s.emplace(2); // {1, 2}
    s.insert(2);  // {1, 2} (duplicate, so not added)
    s.insert(4);  // {1, 2, 4}
    s.insert(3);  // {1, 2, 3, 4}

    /*
      functionality ogf insert in vector can be used also, that only increases efficiency

      begin(),end(),rbegin(),rend(), size(),empty(), swap() are same as those of above 
    */

    auto it = s.find(3); // finds the element 3
    auto it1 =s.find(5); // returns s.end() if 5 is not found

    s.erase(2); // removes the element 2 // takes logarithmic time

    // s.erase(it); // removes the element pointed by the iterator it in constant time
   
    auto it =s.lower_bound(3); // returns an iterator to the first element that is not less than 3 (i.e., 3 or greater)
    auto it1 =s.upper_bound(4); // returns an iterator to the first element that is greater than 4 (i.e., 5 or greater)


// *************Explanation of lower_bound and upper_bound:************

//     lower_bound(x) returns an iterator pointing to the first element that is not less than x (i.e., >= x).
// upper_bound(x) returns an iterator pointing to the first element that is greater than x (i.e., > x).
// Example: Suppose your set is {1, 3, 4, 6}.

// s.lower_bound(3) points to 3 (since 3 is present).
// s.upper_bound(3) points to 4 (the next greater element).
// If the value is not present:

// s.lower_bound(5) points to 6 (first element >= 5).
// s.upper_bound(6) points to s.end() (no element greater than 6).
// Summary:

// lower_bound(x): first element >= x
// upper_bound(x): first element > x
//***********************explanation ends here*************************





}

int main()
{
    Explain_set();
    return 0;
}