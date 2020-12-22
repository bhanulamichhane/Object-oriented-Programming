/*
  WAP that takes 5 numbers as input and
  displays total count of odds and evens.
  
  INPUT        OUTPUT
  ---------------------
  1 6 7 19 5    Total Odds: 4  TOtal Evens: 1
  
*/
int main()
{
   int nums[5], i, odd_count=0, even_count=0;
   printf("\nEnter 5 numbers:\n\n");
   for(i=0;i<5;i++)
   {
      scanf("%d", &nums[i]);
   }    
   

   for(i=0;i<5;i++)
   {
      if(nums[i]%2==0){
         even_count++;
      }
      else
      {
        odd_count++;
      }
   }                
   
   printf("\nTotal Odds: %d", odd_count);
   printf("\nTotal Evens: %d", even_count);
        
   getch();
}
