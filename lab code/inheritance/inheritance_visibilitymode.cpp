//visibility mode demo
#include <iostream>
#include <conio.h>
using namespace std;
class A
{
   private:
      int x;
      void f1(){cout<<"A:f1()"<<endl;}
   protected:
      int y;
      void f2(){cout<<"A:f2()"<<endl;}
   public:
      int z;
      void f3(){cout<<"A:f3()"<<endl;}                
};

class B: public A
{
   private:
      int p;
      void s1() {cout<<"B:s1()"<<endl;} 
   protected:
      int q;
      void s2() {cout<<"B:s2()"<<endl;} 
   public:
      int r;
      void s3() {
           f3();
           cout<<"B:s3()"<<endl;
      }     
};

int main()
{
    B bobj;   
    bobj.s3();
    getch(); return 0;
    
}

