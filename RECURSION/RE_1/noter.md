🟢recursion ?
Recursion is a programming technique where a function calls itself to solve a problem.
It breaks a problem into smaller subproblems of the same type, solving each by calling itself, until it reaches a base case (a condition where it stops calling itself).

Example in C++:

int factorial(int n) {
    if (n == 0) return 1;      // base case
    return n * factorial(n-1); // recursive call
}

🟢recursion tree ?

A recursion tree is a visual representation of how a recursive function breaks a problem into subproblems.
- Each node represents a function call.
- The root is the initial call, and its children are the recursive calls made by that function.
- The tree helps visualize the number of calls and how the problem is divided at each step.

Example for factorial(3):

factorial(3)
   |
   +-- factorial(2)
         |
         +-- factorial(1)
               |
               +-- factorial(0)

Recursion trees are useful for analyzing the time complexity of recursive algorithms.