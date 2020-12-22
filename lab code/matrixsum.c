/*
 WAP in C that adds two matrices and displays the sum matrix
 
 INPUT                              OUTPUT
 -----                              ------
 Matrix1:                           4  3  7
                                    6  7  5 
 1 0 4
 2 3 1
 
 Matrix2:
         
 3 3 3
 4 4 4 
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int m1[2][3] = {{1,0,4}, {2,3,1}};   
  int m2[2][3] = {{3,3,3}, {4,4,4}};
  int sum[2][3];
  
  int i,j;
  
  for(i=0;i<2;i++)
  {
     for(j=0;j<3;j++)
     {
         sum[i][j] = m1[i][j] + m2[i][j];            
     }                
  }
  
  printf("\n\nSum matrix:\n\n");
  for(i=0;i<2;i++)
  {
     for(j=0;j<3;j++)
     {
         printf("%d  ", sum[i][j]);            
     }     
     printf("\n");           
  }
  getch();
}
