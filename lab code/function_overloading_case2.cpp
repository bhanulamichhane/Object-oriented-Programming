//FUNCTION OVERLOADING
/*
The process of providing same name to 2 or more 
functions inside a C++ program is called function
overloading.

Function signature consists of function name
and argument list.

2 or more functions can have same name inside a 
program if their signatures are different.

There are 2 cases how signatures of 2 functions can be
different:
          
1) Both functions have argument list of different sizes
2) Both functions have argument lists of equal size.
   In this case the data types of arguments in the
   argument list must differ.

*/


//CASE 1 demo - different sizes of argument list
#include <iostream>
#include <conio.h>
using namespace std;
int add(float a, int b);
int add(int a, int b);

int main()
{
    int a = 10, b=20, res; 
    float c=30.5;
    res=add(c,b);
    cout<<"res: "<<res<<endl;  
    res=add(a,b);
    cout<<"res: "<<res<<endl;   
    getch();
    return 0;   
}

int add(int a, int b){
   return a+b;
}

int add(float x, int y){
   return x+y;
}






