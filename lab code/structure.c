/*
   STRUCTURE:
   ---------
   Definition: It is an user defined data type that 
               represents a collection of dissimilar
               data items.
   
   Syntax:
          struct <tag_name>
          {
             <data_type> <name_of_data_item1>;
             <data_type> <name_of_data_item2>;
             .
             .
             <data_type> <name_of_data_itemn>;
                    
          } <variable_name1>,  .. ,<variable_namen>;
          
   Example1:
          struct date
          {
              int day;
              int month;
              int year;       
          }d1, d2; 
          
   Example2:
          struct employee
          {
              char [100] name;
              int id;
              float salary;
              int age;   
              struct date appointment;   
          }; 
*/

#include <stdio.h>
#include <conio.h>

struct date
{
  int day;
  int month;
  int year;       
};

struct employee
{
  char name [100];
  int id;
  float salary;
  int age;   
  struct date appointment;      
};

int main()
{
   struct date d1 = {15, 2, 1980};
   struct employee e1= {"Aakash Niraula", 101, 20000.0, 22, d1};
   printf("\n\n");
   printf("Employee Details:\n-----------\n\n");
   printf("Name: %s", e1.name);
   printf("\n\nID: %d", e1.id);
   printf("\n\nSalary: %f", e1.salary);
   printf("\n\nAge: %d", e1.age);
   printf("\n\nAppointment Date: %d/%d/%d", e1.appointment.day, e1.appointment.month, e1.appointment.year);
   getch();
   return 0;
}














