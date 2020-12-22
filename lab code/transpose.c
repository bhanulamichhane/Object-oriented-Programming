/*
  WAP in C that transposes a given matrix.
  
  INPUT                   OUTPUT
  ----                    ------
23 6 7                   23 1 0
1  9 8                    6 9 5
0  5 4                    7 8 4
  
*/

int main()
{
   int m[3][3] = {{23,6,7}, {1,9,8}, {0,5,4}};
   int i, j;
   printf("\nInput matrix:\n\n");
   for(i=0;i<3;i++){
     for(j=0;j<3;j++){
        printf("%d  ", m[i][j]);                 
     }                 
     printf("\n");
   }   
   
   printf("\n\n\nTranspose of the matrix:\n\n");
   for(i=0;i<3;i++){
     for(j=0;j<3;j++){
        printf("%d  ", m[j][i]);                 
     }                 
     printf("\n");
   }     
   getch(); 
}











