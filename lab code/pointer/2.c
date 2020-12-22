/*
   Passing pointers to function as argument
   
   Call by value vs. Call by reference
   -----------------------------------

*/

// Call by reference
void increment(int*);

int main()
{
    int a=19;
    printf("\na: %d", a);
    increment(&a);
    printf("\na: %d", a); 
    getch(); return 0;  
}

void increment(int* f)
{
    *f = *f+5;
}
