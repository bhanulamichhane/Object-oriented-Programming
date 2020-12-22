/*
  WAP in C that finds largest among 3 numbers using function
  that takes pointers to these 3 numbers as arguments.

*/

void max(int*, int*, int*, int*);

int main(){
   int a=12, b=55, c=44, largest;
   max(&a, &b, &c, &largest);
   printf("\nLargest: %d", largest);
   getch(); return 0;
}

void max(int* p, int* q, int* r, int* a)
{
   if(*p>=*q)
   {
        if(*p>=*r)
        {
            *a = *p;          
        } 
        else
        {
           *a = *r;  
        }         
   }   
   else
   {
       if(*q>=*r)
       {
           *a=*q;          
       }      
       else
       {
           *a=*r;    
       }
   }
}
