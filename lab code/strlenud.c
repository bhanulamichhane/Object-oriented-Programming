//WAP in C that uses user defined function to
//compute length of string taken as input from 
// keyboard
#include <stdio.h>
#include <conio.h>

int mystrlen(char[]);

int main()
{
   char word[100];
   int l;
   printf("\nEnter a string:\n\n");
   gets(word);
   l = mystrlen(word);
   printf("\n\nLength of %s is %d\n", word, l); 
   getch();
   return 0;   
}

int mystrlen(char w[])
{
  int i;
  for(i=0;w[i] != '\0'; i++); 
  return i; 
}
