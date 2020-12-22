#include <iostream>
#include <conio.h>
using namespace std;

class A{
  private:
      int x;
  protected:
      int y;
  public:
      int z;    
      void f(int s){x=s;}                
};

class B: public A{
             
};

int main()
{
   A a1;
   //cout<<"x: "<<a1.x;
   a1.f(20);
   getch(); return 0;
   
         
}
