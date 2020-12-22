/*
Lab3 :
-----
WAP in C++ that uses function to perform
following arithmetic operations:
- addition, subtraction, multiplication, division, mod
*/

#include <iostream>
#include <conio.h>
using namespace std;

int arithmeticop(int, int, char);

int main()
{
   int x, y, result; 
   char op;
   cout<<"Enter 2 numbers:"<<endl;
   cin>>x>>y;
   cout<<"Enter the operation to be performed:"<<endl;
   cin>>op;
   result = arithmeticop(x,y,op);
   cout<<x<<op<<y<<":" <<result<<endl;
   getch();
   return 0;
     
}

int arithmeticop(int a, int b, char op)
{
   
    switch(op)
    {
       case '+': return a+b; 
       case '-': return a-b;
       case '*': return a*b;
       case '/': return a/b;
       case '%': return a%b;                        
    }
    
    
}
