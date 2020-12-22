/*
  WAP in C that takes principal, rate of interest
  and time as input and computes simple interest 
  using function without input and with output.
*/
#include <stdio.h>
#include <conio.h>

float si();

int main()
{
   float result;
   result = si();
   printf("\nSimple interest: %f", result);
   getch(); return 0;    
}

float si()
{
  float pr, rate, time, simI;
  printf("\nEnter principal, rate per annum and time:\n\n");
  scanf("%f%f%f", &pr,&rate,&time);
  simI = (pr*time*rate)/100;
  return simI;      
}




