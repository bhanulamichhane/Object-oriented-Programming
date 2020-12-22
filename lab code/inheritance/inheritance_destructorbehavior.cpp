//Behavior of destructor during inheritance
#include <iostream>
#include <conio.h>
using namespace std;
class A
{
   public:
   ~A(){cout<<"~A() destructor called!"<<endl;}      
};

class B: public A
{
   public:   
   ~B(){cout<<"~B() destructor called!"<<endl;}      
};

class C : public B
{
   public:   
   ~C(){cout<<"~C() destructor called!"<<endl;}      
};

int main()
{
    {
          C c1;
    }
    getch(); return 0;
}
