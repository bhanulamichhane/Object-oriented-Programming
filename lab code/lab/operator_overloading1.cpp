#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
   private:
    float length;
    float breadth;
   public:
    void getdata(float l, float b){
      length = l;
      breadth = b;     
    }         
    void display(){
      cout<<"Length: "<<length<<"\tBreadth: "<<breadth<<endl;     
    }
    Rectangle operator+(Rectangle r)
    {
       Rectangle tmp;
       tmp.length = length+r.length;
       tmp.breadth = breadth+r.breadth;
       return tmp;          
    }
};

int main()
{
  Rectangle r1, r2, r3;
  r1.getdata(120.66, 30.06);
  r2.getdata(98.02, 26.00);
  r3 = r1+r2; // r3 = r1.operator+(r2)   
  r3.display();
  getch(); return 0; 
}

