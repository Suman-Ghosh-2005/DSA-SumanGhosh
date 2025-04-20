#include<iostream>

using namespace std;

int main()
{
  
    int array[5];

    cout << " Enter the 5 elements of array";

    for(int i=0 ; i<5 ; i++)
    {
        cin >> array[i];
    }

    cout << "The array is" << endl;

    for(int i=0 ; i<5 ; i++)
    {
       cout << array[i] << " ";
    }



    return 0;
}