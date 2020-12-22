/*
WAP in C that reads name and salary and ID of 3 employees
from a file using fscanf function.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
  FILE *fp;
  int ID, i; char name[40]; float salary;
  fp = fopen("6.txt", "r");
  if(fp==NULL)
  {
    printf("\n6.txt not opened!!\n"); getch(); return 0;            
  }
  while(fscanf(fp, "%f %s %d", &salary, name, &ID)==3)
  {     
     printf("\n\n");   
     printf("\nName:%s", name);
     printf("\nsalary:%f\n", salary);
     printf("\nID:%d\n", ID);
     printf("\n\n");       
  }
  fclose(fp); 
  getch(); return 0;    
}
