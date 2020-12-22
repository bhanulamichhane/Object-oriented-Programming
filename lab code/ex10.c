/*
  FILE NAVIGATION:
  following functions are used for navigating the file
  pointer inside the file:
          
  1) fseek(file pointer, offset, position);
     position comes in three flavours:
              SEEK_SET - 0 (beginning of file)
              SEEK_CUR - 1 (current position of file)
              SEEK_END - 2 (end of file
              
     Example: fseek(fp, 10, 0);
  
  2) rewind(file pointer)
  3) int ftell(file pointer)
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *fp; char c;
  char word[50] = "This is c programming!";
  fp =fopen("9.txt", "r");
  if(fp==NULL)
  {
    printf("\nFile not opend!!\n\n"); getch(); return 0;            
  }
  while((c=fgetc(fp))!=EOF)
  {
     printf("%c", c);                         
  }
  
  printf("\n\nTotal bytes read from file: %d\n\n", ftell(fp));
  
  rewind(fp);
  
  while((c=fgetc(fp))!=EOF)
  {
     printf("%c", c);                         
  }
  
  getch(); return 0;
  
}

