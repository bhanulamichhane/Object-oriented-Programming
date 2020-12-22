/*
WAP in C that writes name and salary and ID of 3 employees
to a file using fprintf function.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
  FILE *fp;
  int ID, i; char name[40]; float salary;
  fp = fopen("6.txt", "w");
  if(fp==NULL)
  {
    printf("\n6.txt not opened!!\n"); getch(); return 0;            
  }
  for(i=0; i<3; i++)
  {
     printf("\nEnter name:\n");
     scanf("%s",name);
     printf("\nEnter salary:\n");
     scanf("%f",&salary);
     printf("\nEnter ID:\n");
     scanf("%d",&ID);
     
     fprintf(fp, "%f %s %d\n", salary, name, ID);         
  }
  fclose(fp); 
  getch(); return 0;    
}
