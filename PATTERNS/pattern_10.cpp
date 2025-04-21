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

int main()
{
   int n=4;

   up(n);
   down(n-1);
   

    return 0;
}