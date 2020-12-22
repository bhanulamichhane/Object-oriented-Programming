/*
  Program to find max among 3 numbers using pointer and
  function
*/
#include <iostream>
#include <conio.h>
using namespace std;
int* max(int*, int*, int*);

int main()
{
   int a, b, c, *res;
   cout<<"Enter 3 numbers:"<<endl;
   cin>>a>>b>>c;
   res = max(&a, &b, &c);
   cout<<"Max: "<<*res<<endl;
   getch(); return 0;   
}

int* max(int* x, int* y, int* z)
{
    if(*x>*y && *x>*z) return x; 
    else if(*y>*x && *y>*z) return y;
    else return z;
         
}
