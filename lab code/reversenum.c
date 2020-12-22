/*
  WAP in C that takes a number as input and finds out
  if it is a palindrome or not.
  
  INPUT       OUTPUT
  ------      --------
  4812        Not a palindrome
  2112        Yes a palindrome
  3           Yes a palindrome
  44          Yes a palindrome
*/
int main()
{
  int n, rev=0, tmp;
  printf("\nEnter a number:\n");
  scanf("%d", &n);
  tmp=n;
  while(n!=0)
  {
     rev = rev*10;
     rev=rev+n%10;     
     n/=10;      
  }   
  if(tmp==rev)
  {
     printf("\n\n%d is palindrome", tmp); 
  }
  else
  {
     printf("\n\n%d is NOT a palindrome", tmp);  
  }
  getch();  
}
