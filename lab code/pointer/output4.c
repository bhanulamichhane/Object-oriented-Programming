//Array of pointers

int main()
{
   char* b[5]; 
   b[0] = "Rajan";
   b[1] = "Gita";
   b[2] = "Tom";
   b[3] = "Melanie";
   b[4] = "Hello";
   
  
   printf("\n%s\n", b[1]);
   printf("\n%s\n", b[0] +3);
   printf("\n%s\n", b[3]+2);
   
   getch(); return 0;   
}
