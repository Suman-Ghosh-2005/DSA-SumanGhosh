#include<bits/stdc++.h>
using namespace std;


void Is_palindrome(string s,int i,int j ){

if(i>j/2){
    cout << "" << s << " is a palindrome." << endl;
}
else{
if(s[i] != s[j]){
    cout << "" << s << " is not a palindrome." << endl;
    return; // Exit if characters do not match
}
else{
    Is_palindrome(s, i + 1, j - 1); // Recursive call with incremented and decremented indices
}

}
  
}


int main()
{
    string s;
    cout << "Enter a string: ";     
getline(cin, s); // Use getline to read the entire line including spaces
    int n = s.length(); 
    int i = 0, j = n - 1;
    Is_palindrome(s, i, j); // Call the function to check if the string is a palindrome

    return 0;
}