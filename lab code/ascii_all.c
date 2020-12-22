/*
  WAP in C that takes a string as input and
  displays only the digits in the string.
  
  INPUT         OUTPUT
  ----=         ------
  "9pkr8@455"   98455 
   
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
   char str[100];
   char ch;
   int i, len, count=0;
   printf("\nEnter a string:\n");
   gets(str);
   len = strlen(str);   
   for(i=0;i<len;i++) 
   {
       ch = str[i];   
       if(!(ch>=48 && ch<=57) && !(ch>=97 && ch<=122) && !(ch>=65 && ch<=90))
       {
            printf("%c", ch);     
       }               
   }
   
   getch();   
   return 0;
}



