#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
  char w[100];
  int i, l, temp;
  printf("\nEnter a word:\n\n");  
  gets(w);
  /*
  l = strlen(w);
  for(i=0;i<l/2;i++)
  {
     temp = w[i];
     w[i] = w[l-i-1];
     w[l-i-1] = temp;                  
  } 
  */  
  printf("\n\nThe reverse:\n\n%s", strrev(w));
  getch(); return 0;
}
