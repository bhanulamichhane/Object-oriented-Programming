/*
 WAP in C that takes a string as input from keyboard,
 writes it to a file and reads from the file.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char word[50], w[50];
    fp = fopen("4.txt", "w");
    if(fp==NULL)
    {
      printf("\n\nFile not opened!!\n");  getch();
      return 0;          
    }
    printf("\nEnter a string:\n\n");
    gets(word);
    fputs(word, fp);
    printf("\nString successflly written to file!\n\n");
    fclose(fp);
    
    fp = fopen("4.txt", "r");
    if(fp==NULL)
    {
      printf("\n\nFile not opened!!\n");  getch();
      return 0;          
    }    
    
    fgets(w, 12, fp);
    printf("\n\nString read from file: %s", w);
    fclose(fp);
    getch(); return 0;
}
