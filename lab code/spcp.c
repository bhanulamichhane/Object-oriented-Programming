/*
   WAP in C that takes cost price and selling price of
   a product as input and finds out whether a profit or 
   loss has been made.
*/

#include <stdio.h>
#include <conio.h>
void main()
{
  float cp,sp;
  printf("\nEnter cost price of product:\n");
  scanf("%f", &cp);   
  printf("\n\n\nEnter selling price of product:\n");
  scanf("%f", &sp);
  if(cp<sp)
  {
     printf("\n\nProfit!!");         
  }      
  else if(cp>sp)
  {
     printf("\n\nLoss!!");    
  }
  else
  {
     printf("\n\nBreakeven!!");   
  }
  getch();
  
}






