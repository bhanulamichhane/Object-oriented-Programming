/*
 WAP in C that copies contents of a file to another.

*/
#include <stdio.h>
#include <conio.h>

int main()
{
   FILE *fp1, *fp2;
   char ch;
   fp1 = fopen("2.txt", "r");
   if(fp1==NULL)
   {
      printf("\nFile 2.txt not opened!!\n\n");
      getch(); return 0;                 
   }       
   
   fp2 = fopen("3.txt", "w");
   if(fp2==NULL)
   {
      printf("\nFile 3.txt not opened!!\n\n");
      getch(); return 0;                 
   } 
   
   while((ch=fgetc(fp1))!=EOF)
   {
        fputc(ch, fp2);                      
   } 
   printf("\n\nFile successfully copied!!");
   getch(); return 0;
    
}
