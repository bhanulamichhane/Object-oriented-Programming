/*
  WAP in C that takes 3 numbers as input
  and computes smallest, largest and average
  of these numbers using function.
  
INPUT                  OUTPUT
------                 ------
Enter 3 numbers:          Smallest: 2
2 5 9                     Largest: 9
                          Average: (2+5+9)/3  

*/

#include <stdio.h>
#include <conio.h>

int smallest(int,int,int);
int largest(int,int,int);
float average(int,int,int);

int main()
{
   int a,b,c,sm,lg;
   float avg;
   printf("\nEnter 3 numbers:\n");
   scanf("%d%d%d", &a,&b,&c);
   sm = smallest(a,b,c);
   lg = largest(a,b,c);
   avg = average(a,b,c);
   printf("\n\nSmallest: %d\n\n", sm);
   printf("\n\nLargest: %d\n\n", lg);
   printf("\n\nAverage: %f\n\n", avg);
   getch(); return 0;
}

int smallest(int x, int y, int z)
{ 
  if(x<y && x<z) 
  {
     return x;
  }
  else if(y<x && y<z)
  {
    return y;   
  }
  else
  {
    return z;     
  }
}

int largest(int x, int y, int z)
{ 
  if(x>y && x>z) 
  {
     return x;
  }
  else if(y>x && y>z)
  {
    return y;   
  }
  else
  {
    return z;     
  }
}

float average(int x, int y, int z)
{ 
   float a;
   a = (float)(x+y+z)/3.0;
   return a;
}







