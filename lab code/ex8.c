/*
WAP in C that reads records (ID, name, salary) of employees
from a file using fread function.
*/
#include <stdio.h>
#include <conio.h>

struct employee
{
   int ID;
   char name[50];
   float salary;       
};
typedef struct employee em;
int main()
{
   FILE *fp;
   em emps[3];
   int i;
   fp=fopen("7.txt", "rb");   
   if(fp==NULL){
     printf("\nFIle not opened!!\n"); getch(); return 0;             
   }        
   //fread(&emps, sizeof(emps), 1, fp); 
   fread(&emps, sizeof(em), 3, fp);           
   for(i=0;i<3;i++)
   {
      printf("\nID: %d", emps[i].ID);  
      printf("\nName: %s", emps[i].name);
      printf("\nSalary: %f", emps[i].salary);              
   }    
   getch(); return 0;
}
