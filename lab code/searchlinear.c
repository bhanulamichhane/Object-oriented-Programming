/*
   WAP in C that checks whether a given search key 
   exists in a given list. 
   INPUT                   OUTPUT
   ------                  -------
   List:                   9 exists in the list   
   11 5 9 7
   Search key:
   9            
   
   List:                   9  does not exist in the list   
   34 99 16 3
   Search key:
   9  
*/
#include <stdio.h>
#include <conio.h>

int main()
{
   int list[100]; 
   int i, search_key;
   printf("\nEnter 7 elements:\n\n");
   for(i=0; i<7; i++)
   {
       scanf("%d", &list[i]);                 
   }
   
   printf("\n\nEnter search key:\n");
   scanf("%d",&search_key);
   
   for(i=0;i<7;i++)
   {
      if(list[i]==search_key){
          printf("\n\n\n%d exists in the list!", search_key);
          getch();
          return 0;                        
      }                
   }
   printf("\n\n\n%d does not exist in the list!", search_key);
   getch();
}
















