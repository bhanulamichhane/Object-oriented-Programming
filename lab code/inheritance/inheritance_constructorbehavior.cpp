//Behavior of constructor during inheritance
#include <iostream>
#include <conio.h>
using namespace std;
class A
{
   public:
   A(int k){cout<<"A() constructer called!"<<endl;}      
};

class B: public A
{
   public:   
   B():A(400){cout<<"B() constructer called!"<<endl;}      
};

class C : public B
{
   public:   
   C(){cout<<"C() constructer called!"<<endl;}      
};

int main()
{
    C c1;
    getch(); return 0;
}
