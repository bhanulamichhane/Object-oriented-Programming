/*
   WAP in C that takes a character as input 
   from keyboard, writes it to a file and reads it
   from the file.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *fp;
  char ch;
  fp = fopen("1.txt", "w");
  if(fp==NULL)
  {
     printf("\nFile could not be opened!!\n\n");
     getch();
     return 0;            
  }
  
  printf("\n\nEnter a character:\n\n");
  ch = getchar();
  fputc(ch, fp);
  printf("\n\nCharacter successfully written to file!!"); 
  fclose(fp);
  getch();
  
  fp = fopen("1.txt", "r");
  if(fp==NULL)
  {
     printf("\nFile could not be opened!!\n\n");
     getch();
     return 0;            
  }
  
  ch = fgetc(fp);
  printf("\n\nCharacter read from file: %c", ch);

  getch();
  return 0;   
}
