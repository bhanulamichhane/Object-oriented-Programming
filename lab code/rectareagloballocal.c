/*
  LOCAL and GLOBAL variables
  
  Local variable: It is a variable defined inside a function
  
  Global Variable: It is a variable defined outside all functions
                   in a c program.
*/

#include <stdio.h>
#include <conio.h>

float rectarea();

float area;
float len, brd;

int main()
{
   rectarea();
   printf("\nArea of rectangle with length: %f and breadth: %f is %f", len, brd,area);
   getch(); return 0;    
}

float rectarea()
{
   printf("\nEnter length and breadth of rectangle:\n");
   scanf("%f%f", &len, &brd);
   area = len*brd;
   return area;      
}



