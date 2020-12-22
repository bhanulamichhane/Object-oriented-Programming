#include <stdio.h>
#include <conio.h>

struct account
{
   char act_no[30];
   char act_name[100];
   float balance;  
   char act_type;     
};

void init();
void display();

struct account acs[3];

int main()
{
   init();
   display();
   getch(); return 0;    
}

void init()
{
   int k;
   printf("\nEnter details of 3 accounts:\n\n"); 
   for(k=0;k<3;k++)
   {
      printf("\n\nAccount No: "); gets(acs[k].act_no);
      printf("\n\nAccount Name: "); gets(acs[k].act_name); 
      printf("\n\nBalance: "); scanf("%f", &acs[k].balance); fflush(stdin); 
      printf("\n\nAccount Type: "); acs[k].act_type=getchar();
      fflush(stdin);
      printf("\n\n----------\n\n");              
   }    
}

void display()
{
   int k;
   printf("\nDetails of 3 accounts:\n\n"); 
   for(k=0;k<3;k++)
   {
      printf("\n\nAccount No: %s", acs[k].act_no);
      printf("\n\nAccount Name: %s", acs[k].act_name); 
      printf("\n\nBalance: %f", acs[k].balance); 
      printf("\n\nAccount Type: %c", acs[k].act_type); 
      
      printf("\n\n--------------------\n\n");             
   }    
}




