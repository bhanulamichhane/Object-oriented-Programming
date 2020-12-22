//Pointer and array

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int a[5]={100,200,300,400,500};
   int* p = a;
   cout<<"a : "<<a<<endl;
   cout<<"&a[0] : "<<&a[0]<<endl;
   cout<<"&a : "<<&a<<endl;
   cout<<"p : "<<p<<endl;
   cout<<endl<<endl;
   int i=0;
   for(;i<5;i++)
   {
      cout<<"&a["<<i<<"] :"<<&a[i]<<endl;             
   }
   cout<<endl<<endl;
   for(i=0;i<5;i++)
   {
      cout<<"&a["<<i<<"] :"<<a+i<<endl;             
   }
   cout<<endl<<endl;
   for(i=0;i<5;i++)
   {
      cout<<"&a["<<i<<"] :"<<p+i<<endl;             
   }   
   
   //Accessing values of array
   for(i=0;i<5;i++)
   {
      cout<<"a["<<i<<"] :"<<a[i]<<endl;             
   }
   cout<<endl<<endl;
   for(i=0;i<5;i++)
   {
      cout<<"a["<<i<<"] :"<<*(a+i)<<endl;             
   }
   cout<<endl<<endl;
   for(i=0;i<5;i++)
   {
      cout<<"a["<<i<<"] :"<<*(p+i)<<endl;             
   }   
   
   //using increment operator in array
   
   //a++;  not allowed
    

   getch(); 
   return 0;
               
}
