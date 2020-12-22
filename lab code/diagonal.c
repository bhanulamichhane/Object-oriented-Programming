/*
  WAP in C that sums up diagonal of a (3*3) matrix.
  
  INPUT                   OUTPUT
  ----                    ------
23 6 7                   23+9+4 = 36
1  9 8                    
0  5 4                    
  
*/

int main()
{
   int m[3][3] = {{23,6,7}, {1,9,8}, {0,5,4}};
   int i, j, sum=0;
   printf("\nInput matrix:\n\n");
   for(i=0;i<3;i++){
     for(j=0;j<3;j++){
        printf("%d  ", m[i][j]);                 
     }                 
     printf("\n");
   }   
   
   for(i=0,j=2;i<3;i++,j--){
         sum = sum+m[i][j];                  
   }     
   printf("\n\n\n Sum of the right diagonal : %d", sum);
   getch(); 
}











