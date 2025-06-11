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
    int second_L=-1;
    for(int i=1 ; i<5 ; i++)
    {
       
        if(array[i] > largest  ) // Compare each element with the current largest
        {
            second_L = largest; // Update second largest before updating largest
            largest = array[i]; // Update largest if a larger
            
        }
        else if(array[i] > second_L && array[i] < largest) // Check for second largest
        {
            second_L = array[i]; // Update second largest if a larger element is found
        }
    }
    cout << "The largest element in the array is: " << largest << endl;
    cout << "The second largest element in the array is: " << second_L << endl;

    return 0;
}