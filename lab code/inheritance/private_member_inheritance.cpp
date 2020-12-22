#include <iostream>
#include <conio.h>

using namespace std;

class A
{
   private:
        int x;   
   friend class B; 
};

class B: protected A
{
   public:
      void f(){cout<<"x: "<<x;}
      void f1(A a){cout<<"a.x: "<<a.x;}    
};
/*
class C: public A
{
   public:
      void f(){cout<<"x: "<<x;}    
};
*/
int main()
{
   B b;
   b.f(); 
   A a;
   b.f1(a);
   //C c;
   //c.f();
   getch(); return 0;    
}
