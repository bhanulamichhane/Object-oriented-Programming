/*
  WAP in C that computes product of first 
  and last digit of a 4 digit number.
  
  Input       Output
  ------      -------
  3421         3
  5567         35     

*/

#include <stdio.h>
#include <conio.h>
int main(){
   int n, f,l;
   printf("\nEnter a 4 digit number:\n");
   scanf("%d", &n);
   f=n/1000;
   l=n%10;
   

   
   printf("\n\nProduct of first and last digits of %d is %d\n\n", n,f*l);
   
   getch();  
}












