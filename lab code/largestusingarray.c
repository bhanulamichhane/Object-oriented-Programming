/*
   WAP in C that finds largest among n numbers using function.
   
   INPUT                                        OUTPUT
   ------                                       -------
How many numbers should be entered?          Largest : 444
5
Enter 5 numbers:
23 7 444 1 0
     
*/

#include <stdio.h>
#include <conio.h>

int largest(int[],int);
int main()
{
   int n,i,nums[100], lg;
   printf("\nHow many numbers should be entered?\n");
   scanf("%d", &n);
   printf("\n\nEnter %d numbers:\n", n);
   for(i=0;i<n;i++)
   {
      scanf("%d", &nums[i]);                
   }
   
   lg = largest(nums,n);
   printf("\n\n\nLargest: %d", lg);
   getch(); return 0;    
}

int largest(int a[], int s)
{
    int i, lg;
    lg = a[0];
    for(i=1;i<s;i++)
    {
       if(a[i]>lg){
          lg = a[i];            
       }                
    }
    return lg;    
}









