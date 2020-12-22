#include <iostream>
#include <conio.h>

using namespace std;

class Circle
{
  private:
      int radius;
  public:
      void getdata(int r){radius = r;}
      void display(){cout<<"Radius: "<<radius<<endl;}
      /*
      //preincrement
      Circle operator++(){
        Circle tmp;
        tmp.radius=++radius;
        return tmp;       
      }
      //postincrement
      Circle operator++(int){
        Circle tmp;
        tmp.radius=radius++;
        return tmp;       
      }*/
      friend Circle operator++(Circle c);   
      friend Circle operator++(Circle c,int);      
};

Circle operator++(Circle c){
  Circle c1;
  c1.radius=++(c.radius);
  return c1;       
}

Circle operator++(Circle c, int){
  Circle c1;
  c1.radius=(c.radius)++;
  return c1;       
}

int main(){
  Circle c1,c2;
  c1.getdata(20);
  c2=++c1;
  c2.display();
  c2=c1++;
  c2.display();
  getch(); return 0;    
}

