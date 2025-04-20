What is time complexity?  
It is not equals to the time taken because it depends on the system.
SO IT IS THE RATE OF WHICH THE TIME TAKEN INHCREASES WITH RESPECT TO THE INPUT SIZE.


we represent Time complexity with Big O notation -> O() 
there are few others like theta notation and omega notation but are not 


example:-

for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<n ; j++)
    {
        Some block of code
    }
}

TC for this code is O(n^2)

What is space complexity ?  
Auxiliary space -> space that youb take to solve problem + input space -> space that you take to store the input.

example

int a,b; -> input space
int c =a+b; -> Auxiliary space  the extra space i need to solve the question

big O notation
