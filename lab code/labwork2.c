/*
  Labwork 1:
          WAP in C that takes a number as input and displays 
          its absolute value.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
       int a1;
       printf("\nEnter a number:\n\n");
       scanf("%d", &a1);
       if(a1<0)
       {
          printf("\n\nAbsolute value of %d : %d",a1,a1*-1);         
       }
       else
       {
          printf("\n\nAbsolute value of %d : %d",a1,a1);  
       }
       getch();
}
