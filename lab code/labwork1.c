/*
  Labwork 1:
          WAP in C that takes 3 angles of a triangle
          as input and verifies whether their sum in 180.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
       int a1,a2,a3,sum;
       printf("\nEnter 3 angles of triangle:\n\n");
       scanf("%d%d%d", &a1,&a2,&a3);
       sum = a1+a2+a3;
       if(sum==180)
       {
          printf("\n\nSum of the angles is 180!!");            
       }
       else
       {
          printf("\n\nSum of the angles is NOT 180!!"); 
       }
       getch();
}
