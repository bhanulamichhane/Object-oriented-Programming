/*
  WAP in C that takes a string as input and
  counts total vowels and consonants in the string.
  
  INPUT             OUTPUT
  ------            ------
  "anapple"        Total vowels: 3  
                   Total consonants: 4
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
   char word[100];
   char ch;
   int vowel_counter=0, consonant_counter=0, i;  
   printf("\nEnter string:\n\n");
   gets(word);
   i=0;
   while((ch=word[i])!='\0'){
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
        vowel_counter++;                                               
     }           
     else
     {
        consonant_counter++;
     }
     i++;
   }
   
   printf("\n\n\nTotal vowels: %d", vowel_counter);
   printf("\n\n\nTotal consonants: %d", consonant_counter);
   getch();
   return 0;
}   
