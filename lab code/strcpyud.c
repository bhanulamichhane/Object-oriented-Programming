//WAP in C that copies one character array to another. 
#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
   char word[100];
   char wordcpy[100]; int i;
   printf("\n\nEnter a string:\n\n");
   gets(word);
   strcpy(wordcpy,word);
   printf("\n\nCopy: %s", wordcpy);
    
   getch();
   return 0;   
}

