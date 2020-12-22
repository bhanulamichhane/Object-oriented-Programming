#include <iostream>
#include <conio.h>
using namespace std;

class A{
   int a;
   public:
       A(){cout<<"A()"<<endl;}         
};

class B:public A{
   int b;
   public:
       B(){cout<<"B()"<<endl;}   
       B(int b){cout<<"B(int)"<<endl;}       
};

class C:public  B{
   int c;
   public:
       C(){cout<<"C()"<<endl;} 
       C(int x):B(7){cout<<"C(int)"<<endl;}        
};

int main()
{
    C c1(8);
    getch(); return 0;
    
}
