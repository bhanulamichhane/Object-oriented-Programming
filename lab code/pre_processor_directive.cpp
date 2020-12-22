/*
   PRE-PROCESSOR DIRECTIVES / MACRO
   --------------------------------
   
   The instructions that are directed towards or
   processed by the pre-procressing unit are called
   pre-processor directives. There are 2 kinds of pre-
   processor directives in C++:
             
   1)#include - this includes content of header file 
                in the current program before compilation
   2)#define - this is used to define symbolic identifier
               for frequently used constants
   
   Pre-processor directives are preceded by hash symbol(#).
   They are not processed by the compiler.   
*/

#include <iostream>
#include <conio.h>
#define mul(a,b) a*b
using namespace std;
int main()
{
  int x=20, y=4;
  cout<<mul(5+2,8)<<endl;
  getch();
  return 0;    
}



