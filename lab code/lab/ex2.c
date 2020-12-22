/*
  WAP in C that 
1) writes names of students to a file 3.txt
2) reads the names of students from 3.txt, replaces
   "Ram" and "Hari" by "Max" and "Paul" respectively
   and write the names with replacement to 4.txt.

*/
#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *fp1, *fp2;
  char name[50];
  fp1= fopen("3.txt", "w");
  if(fp1==NULL)
  {
     printf("\n3.txt not opened!!\n\n"); getch(); return 0;             
  }
  fprintf(fp1, "%s\n", "tom");
  fprintf(fp1, "%s\n", "ram");
  fprintf(fp1, "%s\n", "shyam");
  fprintf(fp1, "%s\n", "hari");
  fprintf(fp1, "%s\n", "shiva");
  
  printf("\n\n5 names successfully written to 3.txt!!\n\n");
  
  fclose(fp1);
  fp1= fopen("3.txt", "r");
  if(fp1==NULL)
  {
     printf("\n3.txt not opened!!\n\n"); getch(); return 0;             
  }  
  fp2= fopen("4.txt", "w");
  if(fp2==NULL)
  {
     printf("\n4.txt not opened!!\n\n"); getch(); return 0;             
  } 

  while(fscanf(fp1, "%s",&name)==1)
  {
                 
     if(strcmp(name, "ram")==0)
        fprintf(fp2, "%s\n", "max"); 
     else if(strcmp(name, "hari")==0)
        fprintf(fp2, "%s\n", "paul");
     else
        fprintf(fp2, "%s\n", name);                    
  }
  
  fclose(fp1);
  fclose(fp2);
    
  getch();return 0; 
  
}
