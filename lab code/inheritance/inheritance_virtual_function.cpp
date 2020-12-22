//virtual function
#include <iostream>
#include <conio.h>
using namespace std;
class A{
      public:
         virtual void display(){
            cout<<"display() of A called"<<endl;     
         }
};

class B: public A{
      public:
         void display(){
            cout<<"display() of B called"<<endl;     
         }  
};

int main()
{
   A *p; 
   B b;
   A a;
   a.display();//Early binding
   p=&a;
   p->display();//Early binding
   p=&b;
   p->display();//Late binding
   getch(); return 0;
      
    
}
