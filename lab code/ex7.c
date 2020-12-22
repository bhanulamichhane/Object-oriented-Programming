/*
WAP in C that writes records (ID, name, salary) of employees
to a file using fwrite function.
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
   em emps[3]={{111, "Tom", 20000.0},
               {222, "Paul", 23000.0}, 
               {333, "Max", 30000.0}
              };
   fp=fopen("7.txt", "wb");   
   if(fp==NULL){
     printf("\nFIle not opened!!\n"); getch(); return 0;             
   }        
   //fwrite(&emps, sizeof(emps), 1, fp); 
   fwrite(&emps, sizeof(em), 3, fp);          
   printf("\n\nArray successfully written to file 7.txt\n");    
   getch(); return 0;
}
