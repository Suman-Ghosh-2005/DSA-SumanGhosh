#include<iostream>

using namespace std;

void printUp(int n)
{

    for (int i = 0; i < n; i++)
    {  
       for (int k = 0; k < n-(i+1); k++)
       {
        cout << " "<<" ";
       }
       
       for (int j = 0; j < 2*i +1; j++)
       {
         cout <<"* " ;
       }
       cout << endl;
       
    }

}
void printDown(int n)
    {
        for (int i = 0; i < n; i++)
        {  
           for (int k = 0; k < i; k++)
           {
            cout << " "<<" ";
           }
           
           for (int j = 0; j < (2*n-(2*i+1)); j++)
           {
             cout <<"* " ;
             
           }
           cout << endl;
           
        }
    }

int main()
{
   int n=4;

   printUp(n);
   printDown(n);
   

    return 0;
}