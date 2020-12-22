/*
   STRUCTURE AND FUNCTION
*/
#include <stdio.h>
#include <conio.h>

struct student
{
   char name[100];
   int roll;
   char course[50];   
};

struct student init();
void display(struct student);

int main()
{
   struct student std;
   std=init();
   display(std);
   
   getch(); return 0;
}

struct student init()
{
   struct student std;
   printf("\n\nEnter name of student:\n");
   gets(std.name); 
   printf("\n\nEnter Roll number of student:\n");
   scanf("%d", &std.roll); 
   printf("\n\nEnter course of student:\n");
   fflush(stdin);
   gets(std.course);   
         
   return std;    
}

void display(struct student std)
{
    printf("\n\n------------\n\n");
    printf("\nStudent Details:\n\n");
    printf("\n\nName: %s", std.name);
    printf("\n\nRoll: %d", std.roll);
    printf("\n\nCourse: %s", std.course);
}







