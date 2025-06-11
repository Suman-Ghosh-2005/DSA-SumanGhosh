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

    
    int largest = array[0]; // Assume the first element is the largest
    for(int i=0 ; i<5 ; i++)
    {
       
        if(array[i] > largest) // Compare each element with the current largest
        {
            largest = array[i]; // Update largest if a larger element is found
        }
    }
    cout << "The largest element in the array is: " << largest << endl;


    return 0;
}