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

*/

#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *fp;
  char word[50] = "This is c programming!";
  fp =fopen("9.txt", "w+");
  if(fp==NULL)
  {
    printf("\nFile not opend!!\n\n"); getch(); return 0;            
  }
  fputs(word, fp);
  fseek(fp, 8, SEEK_SET);
  fputs("maths", fp);
  getch(); return 0;
  
}

