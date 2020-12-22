//Pointer demo

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int a=25;
   int* p = &a;
   cout<<"Value of a (a) :"<<a<<endl;
   cout<<"Address of a (&a) :"<<&a<<endl;
   cout<<"value of p or memory to which p points to (p): "
       <<p<<endl;
   cout<<"value stored at the memory address"
       <<" pointed by p (*p): "<<*p<<endl;
   cout<<"Memory address at which p is stored (&p)"
       <<&p<<endl;
   getch(); 
   return 0;
               
}
