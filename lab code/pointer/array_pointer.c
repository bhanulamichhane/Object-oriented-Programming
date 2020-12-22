//Arrays and Pointers

int main()
{
    int A[] = {33,4,2,87,5}; 
    int *p; int *b; int x; b = &x;
    printf("\n&A[0]: %d\n", &A[0]);
    printf("\nA[0]: %d\n", A[0]);
    printf("\n\n\n");
    printf("\nA: %d\n", A);
    printf("\n*(A+0): %d\n", *(A+0));
    printf("\n\n\n");
    printf("\nA+1: %d\n", A+1);
    printf("\n*(A+1): %d\n", *(A+1));
    p=A; 
    printf("\n\n\n");
    printf("\np+1: %d\n", p+1);
    printf("\n*(p+1): %d\n", *(p+1));
    p++;
    //A=p; Not allowed
    //A++; Not allowed
    getch(); return 0;  
}
