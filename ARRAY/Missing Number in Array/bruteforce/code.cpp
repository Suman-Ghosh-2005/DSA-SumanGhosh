#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int arr[] = {1, 2, 4, 5}; 

    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 1; i < n; i++)
    {
        int missing=false;
       
        for(int j=0 ; j<size ; j++)
        {
         if (arr[j]==i)
         {
            missing = false;
            break;

         }
         else

            {
                missing = true;
            
        }
            
        }
         if(missing){
            cout << "The missing number is: " << i << endl;
            break;
        }
    }



    return 0;
}
