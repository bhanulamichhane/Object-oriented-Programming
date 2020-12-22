#include <string.h>
#include <stdio.h>
#include <conio.h>

void modify(char *);
void display(char *);
void display2(char *);

int main()
{
   char C[5] = "name";
   modify(C);
   display(C); 
   display2(C);
   getch();
   return 0;    
}

void modify(char B[])
{
    int i; 
    for(i=0;B[i]!='\0'; i++)
    {
       B[i] = 'X';                    
    }    
}

void display(char *D)
{
    int i; 
    for(i=0;*(D+i)!='\0'; i++)
    {
       printf("%c", *(D+i));                   
    }
    printf("\n\n");
  
}

void display2(char *D)
{
     
    for(;*D!='\0'; D++)
    {
       printf("%c", *D);                    
    }
  
}
