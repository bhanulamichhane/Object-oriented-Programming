/*
   WAP in C that takes a list of size 10 as input 
   and finds sum of the even and odd numbers separately.
   
   INPUT                   OUTPUT
   ------                  -------
   List:                   Odd sum:   32                     
   11 5 9 7 8 2 4 8 6 2    Even sum:  30

*/
#include <stdio.h>
#include <conio.h>

int main()
{
   int list[10]; 
   int i, odd_sum=0, even_sum=0;
   printf("\nEnter 10 elements:\n\n");
   for(i=0; i<10; i++)
   {
       scanf("%d", &list[i]);                 
   }

   for(i=0;i<10;i++)
   {
      if(list[i]%2==0) even_sum+=list[i];
      else odd_sum+=list[i];                        
                      
   }
   printf("\n\n\nOdd sum: %d", odd_sum);
   printf("\n\nEven sum: %d", even_sum);
   getch();
}
















