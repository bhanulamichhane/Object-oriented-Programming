/*
WAP in C that copies contents of a file to another
using fgets and fputs functions.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
  FILE *fp1, *fp2; 
  char word[50];
  fp1 = fopen("2.txt", "r");
  fp2 = fopen("5.txt", "w"); 
  if(fp1==NULL)
  {
     printf("\n2.txt not opened!!\n\n"); getch(); return 0;             
  }
  if(fp2==NULL)
  {
     printf("\n5.txt not opened!!\n\n"); getch(); return 0;             
  }
  while(fgets(word, 3, fp1) != NULL)
  {
      fputs(word, fp2);   
  }
  printf("\n\nFile successfully copied!!"); getch(); return 0;   
}
