/*
  WAP in C that takes a sentence as input and
  counts total lower case letters,
  upper case letters, whitespaces, digits
  and special characters in the string.
  
  NOTE: 
        whitespaces - blank, horizontal tab
        special character - a character that
                            is not a letter, digit
                            whitespace is a special
                            character
  
  INPUT                          OUTPUT
  ------                         ------
  "1 January@    2018?"       Total whitespaces: 2  
                              Total upper case letter:1
                              Total lower case letter:6
                              Special char: 2
                              Total digits: 5
                               
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
   char word[100];
   char ch;
   int l_count=0,u_count=0,w_count=0,d_count=0,s_count=0, i;  
   printf("\nEnter string:\n\n");
   gets(word);
   i=0;
   while((ch=word[i])!='\0'){
     if(ch>=97 && ch<=122)
     {
        l_count++;  
     }                                               
     else if(ch>=65 && ch<=90)
     {
        u_count++;
     }
     else if(ch==' ' || ch=='\t')
     {
        w_count++;  
     }
     else if(ch>=48 && ch<=57)
     {
        d_count++;     
     }
     else 
     {
       s_count++;     
     }
     i++;
   }
   
   printf("\n\n\nTotal lower case letters: %d", l_count);
   printf("\n\n\nTotal upper case letters: %d", u_count);
   printf("\n\n\nTotal digits letters: %d", d_count);
   printf("\n\n\nTotal whitespaces: %d", w_count);
   printf("\n\n\nTotal special characters: %d",s_count);
   getch();
   return 0;
}   
