//virtual base class in C++
#include <iostream>
#include <conio.h>

using namespace std;

class A{
   public:
       void display(){cout<<"display() of A called!"<<endl;}
       int x;    
};

class B:  virtual public A{
       
};

class C:  virtual public A{
       
};

class D: public B, public C{
       
};

int main()
{
   D dobj; 
   //cout<<"size of dobj: "<<sizeof(dobj)<<endl;
   dobj.display()
   getch();
   return 0;
}

