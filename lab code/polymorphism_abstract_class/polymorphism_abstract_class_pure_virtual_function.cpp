//polymorphism
#include <iostream>
#include <conio.h>
using namespace std;
class Shape
{
   public:
      virtual void getarea()=0;//pure virtual function      
};

class Rectangle:public Shape
{
   int length, breadth;
   public:
      Rectangle(int l, int b){length=l;breadth=b;}    
      void getarea(){
        cout<<"Area of rectangle: "<<(length*breadth)<<endl;     
      }
};

class Circle:public Shape
{
   int radius;
   public:
      Circle(int r){radius=r;}
      void getarea(){
        cout<<"Area of Circle: "<<(3.14*radius*radius)<<endl;     
      }
};

class Square:public Shape
{
   int l;
   public:
      Square(int length){l=length;}    
      void getarea(){
        cout<<"Area of Square: "<<(l*l)<<endl;     
      }
};

int main()
{
   Shape* s[3];  
   Rectangle r(4,5);
   Circle c(6);
   Square s1(10);
   s[0]=&r;
   s[1] = &c;
   s[2] = &s1;
   int i;
   for(i=0;i<3;i++){
     s[i]->getarea();                 
   }  
   getch(); return 0; 
}



