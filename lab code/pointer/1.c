/* 
   VOID POINTER - Generic Pointer
   
   Syntax:
          void* <pointer_var_name>;
    
*/

int main()
{
   int a = 100;
   int *p, *x;
   void* pv;
   p=&a;
   printf("\n Address of a: %d", p);
   printf("\n Value of a: %d", *p);
   
   pv = p;
   printf("\n Address of a: %d", pv);
   //printf("\n Value of a: %d", *pv);
   
   x = (int*) pv;
   printf("\n Address of a: %d", x);
   printf("\n Value of a: %d", *x);
   getch();
   return 0;
   
       
}
