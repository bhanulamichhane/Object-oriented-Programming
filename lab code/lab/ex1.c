/*
  WAP in C that 
1) writes the string "a stormy day in pokhara" 
   in a file "1.txt" 
2) reads the string from the file "1.txt" and 
   writes only the consonants in the string to the
   the file "2.txt"

*/
#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *fp1, *fp2;
  char word[] = "a stormy day in pokhara";
  char ch;
  fp1=fopen("1.txt", "w");
  if(fp1==NULL)
  {
     printf("\nFile 1.txt not opened!!\n\n");
     getch(); return 0;             
  }  
  
  fputs(word, fp1);
  fclose(fp1);
  
  fp1=fopen("1.txt", "r");
  if(fp1==NULL)
  {
     printf("\nFile 1.txt not opened-read mode!!\n\n");
     getch(); return 0;             
  }  
  fp2=fopen("2.txt", "w");
  if(fp2==NULL)
  {
     printf("\nFile 2.txt not opened-write mode!!\n\n");
     getch(); return 0;             
  }    
  
  while((ch=fgetc(fp1))!=EOF)
  {
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
       continue;
     } 
     fputc(ch, fp2);                          
  }
  fclose(fp1);
  fclose(fp2);
  
  getch();return 0; 
  
}
