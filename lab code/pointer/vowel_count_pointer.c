/* 
   WAP in C that takes a string as input
   from keyboard and uses function that takes
   pointer to character as argument to count
   the vowels in the string
*/

int vowelcount(char*);

int main()
{
  char word[100];
  printf("\nEnter a string:\n\n");
  gets(word);
  printf("\nTotal vowels: %d", vowelcount(word));
  getch(); return 0;    
}

int vowelcount(char *pword)
{
     int k, vowels=0;
     char c;
     for(k=0; *(pword+k)!='\0'; k++)
     {
          c = *(pword+k);    
          if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
              vowels++;         
     }  
     return vowels;
}

 
