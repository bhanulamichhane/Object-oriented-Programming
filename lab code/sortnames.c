/*
 WAP in c that takes names of cities as input 
 and sorts them in lexicographic order.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
  char names[5][50];
  char temp[50];
  int i,j;
  printf("\n\nEnter 5 city names:\n\n");
  for(i=0;i<5;i++){
    gets(names[i]);                 
  }
  for(i=0;i<4;i++)
  {
    for(j=0;j<5-i-1;j++)
    {
       if(strcmp(names[j], names[j+1])>0)
       {
         strcpy(temp, names[j]);
         strcpy(names[j], names[j+1]);
         strcpy(names[j+1], temp);                    
       }                    
    }                
  }
  
  printf("\n\n\nThe sorted list of cities:\n\n");
      
  for(i=0;i<5;i++)
  {
     printf("%s\n", names[i]);                
  }    
      
  getch(); return 0;    
}
