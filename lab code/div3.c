/*
  A program that takes 8 numbers as input and
  displays those which are divisible by 3
*/
int main()
{
   int nums[8], i;
   printf("\nEnter 8 numbers:\n\n");
   for(i=0;i<8;i++)
   {
      scanf("%d", &nums[i]);
   }    
   
   printf("\n\nNumbers divisible by 3:\n\n");
   for(i=0;i<8;i++)
   {
      if(nums[i]%3==0){
         printf("%d\t", nums[i]); 
      }
   }                     
   getch();
}
