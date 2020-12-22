//Function overriding

#include <iostream>
#include <conio.h>

using namespace std;

class A{
  int x;
  public :
     A(int a){x=a;}    
     void display(){
        cout<<"x:"<<x ;    
     }    
     void f(int k){x=k;}    
};

class B: public A{
  int y;
  public :
     B(int a):A(a){y=400;}     
     void display(){
        cout<<"y:"<<y ;    
     }   
     void f(){y=3000;}      
};

int main()
{
   B b(100);
   //b.display(); //function overriding
   b.f(222); //function hiding
   getch();
   return 0;
       
}
