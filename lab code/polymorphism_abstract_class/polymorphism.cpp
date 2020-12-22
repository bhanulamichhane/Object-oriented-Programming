#include <iostream>
#include <conio.h>
using namespace std;
class Shape
{
      public:
   virtual void getarea()=0;    
};
class Circle:public Shape
{
   int radius;
   public:
   Circle(int r){radius=r;} 
   void getarea(){cout<<"Area of circle: "<<(2*3.14*radius)<<endl;}     
};

class Rectangle: public Shape
{
   int length, breadth;
   public:
   Rectangle(int l, int b){length=l;  breadth=b;} 
   void getarea(){cout<<"Area of rectangle: "<<(length*breadth)<<endl;}     
};

int main()
{
  Shape s[2];
  Circle c(3);
  Rectangle r(5,6);
  s[0]=c;
  s[1]=r ;   
  int i=0;
  for(;i<2;i++){
     s[i].getarea();              
  }
  getch();
  return 0;
}

