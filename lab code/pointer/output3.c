/*
  What is the output of following program?
*/

#include <string.h>

int main()
{
   char p[20]; int i;
   char *s = "string"; //string literal
   int length = strlen(s); 
   for(i=0; i<length;i++)
       p[i]=s[length-i];
       
   printf("%s", p);
   getch(); return 0;   
}
