#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char word[100]; 
  printf("\nEnter a word:\n");
  gets(word);
  printf("\n\nThe word is: %s\n\n", word);
  
  printf("\n\nsize of array: %d\n\n", sizeof(word));
  printf("\n\nLength of word: %d\n\n", strlen(word));
  
  getch();
  return 0;    
}
