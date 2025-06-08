#include <bits/stdc++.h>
using namespace std;

void Hashing_lowercase(string s)
{

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    int Query;
    cout << "enter the number of queries" << endl;
    cin >> Query;

    while (Query--)
    {
        char qE;
        cout << "enter the element to be searched" << endl;
        cin >> qE;

        cout << "Count of " << qE << " in the input : " << hash[qE-'a'] << endl; // Print the count of n
    }
}
void Hashing(string s)
{

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }

    int Query;
    cout << "enter the number of queries" << endl;
    cin >> Query;

    while (Query--)
    {
        char qE;
        cout << "enter the element to be searched" << endl;
        cin >> qE;

        cout << "Count of " << qE << " in the input : " << hash[qE] << endl; // Print the count of n
    }
}
int main()
{

    string s;
    cout << "enter the alphabets or any name or words" << endl;

    cin >> s;

    Hashing(s); // Call the Hashing function with the array, max value, and size
    return 0;
}