/*
 WAP in C that finds whether a 3 digit number is an 
 armstrong number or not.
 
 INPUT            OUTPUT
 ------           -------
 235              2*2*2 + 3*3*3 + 5*5*5 = 160
                  Not an armstong number
 
 371              3*3*3 + 7*7*7 + 1*1*1 = 371
                  Yes an armstrong number

*/

int main()
{
  int num, temp, sum=0, n;
  printf("\nEnter a 3 digit number:\n"); 
  scanf("%d", &num);
  temp=num;
  while(num>0)
  {
     n=num%10;
     sum = sum + (n*n*n);
     num=num/10;            
  }   
  if(sum==temp){
     printf("\n\n\n%d is an armstrong number!!", temp);              
  }
  else{
     printf("\n\n\n%d is NOT an armstrong number!!", temp);  
  }
  getch(); return 0;  
}









