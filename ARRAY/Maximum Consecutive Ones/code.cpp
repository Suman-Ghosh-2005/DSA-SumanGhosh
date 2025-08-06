#include<iostream>

using namespace std;

int main()
{
  
    int array[]={1, 0, 1, 1, 0, 1, 1, 1};
    
    int maxim=0;
    int cnt=0;

    int n = sizeof(array)/sizeof(array[0]);

    for(int i=0; i<n; i++)
    {
        if(array[i]==1)
        {
            cnt++;
            maxim= max(maxim, cnt); 

        }
        else
        {
            cnt=0;
        }
    }

  cout << "Maximum consecutive ones are: " << maxim << endl;


    return 0;
}