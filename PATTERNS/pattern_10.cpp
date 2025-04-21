#include<iostream>

using namespace std;

void up(int n)
{
    for (int i = 0; i < n; i++)
   {
      for (int j = 0; j <=i ; j++)
      {
        cout << "* ";
      }
      cout << endl;
      
   }
}

void down(int n)
{
    for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n-i; j++)
      {
        cout <<"* " ;
      }
      cout << endl;
      
   }
}

void print10(int n)
{
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars=i;
        if(i>n)
        {
            stars=2*n-i;
        }
       for (int j = 1; j <= stars; j++)
       {
         cout <<"* " ;
       }
       cout << endl;
       
    }
}

int main()
{
   int n=4;

//    up(n);
//    down(n-1);
print10(n);
   

    return 0;
}