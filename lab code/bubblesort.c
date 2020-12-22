/*
  C Implementation of Bubble Sort
*/
#include <stdio.h>
#include <conio.h>
int main(){
    int list[10] = {200,7,8,76,0,-8,13,103,99,15};
    int i,j,tmp;
    
    printf("\n\nThe random list:\n\n");
    
    for(i=0;i<10;i++)
    {
       printf("%d\t", list[i]);                 
    }
    
    printf("\n\n");
    
    for(i=0;i<9;i++)
    {
       for(j=0;j<10-i-1; j++)
       {
          if(list[j]>list[j+1])
          {
             tmp=list[j];
             list[j] = list[j+1];
             list[j+1] = tmp;                     
          }                  
       }                
    }
    
    printf("\n\nThe sorted list:\n\n");
    
    for(i=0;i<10;i++)
    {
       printf("%d\t", list[i]);                 
    }
    getch();
}
