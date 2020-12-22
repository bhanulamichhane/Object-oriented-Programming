/*
   WAP in C that finds largest element in an
   array using function that takes a pointer to
   the array as argument.
*/

void findmax(int*, int*);

int main()
{
   int nums[] = {100, 8, 34, 2, 67};
   int res;
   findmax(nums, &res);
   printf("\nLargest number: %d", res);
   getch(); return 0;    
}

void findmax(int* A, int* largest)
{
    int i;
    *largest = A[0];
    for(i=1; i<5; i++)
    {
        if(*(A+i) > *largest)
        {
           *largest = *(A+i);        
        }         
    } 
}
