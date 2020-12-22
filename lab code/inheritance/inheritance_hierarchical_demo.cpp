//hierarchical inheritance

#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
   char eid;      
   public:
       Employee(int id){eid=id;}
       void displayemployee()
       {
          cout<<"Employee ID: "<<eid<<endl;
       }     
};

class Typist: public Employee
{
   int t_speed;      
   public:
       Typist(int id, int speed):Employee(id)
       {
          t_speed=speed;
       } 
       void displaytypist()
       {
          displayemployee();
          cout<<"Typing Speed: "<<t_speed<<endl;
       }     
};

class Teacher: public Employee
{
   char *subject;
   public:
       Teacher(int id, char* s):Employee(id)
       {
          subject=s;
       }
       void displayteacher()
       {
          displayemployee();
          cout<<"Subject: "<<subject<<endl;
       }     
};

int main()
{
     Teacher c(5,"biology");
     c.displayteacher();
     Typist t(100,200);
     t.displaytypist();
     Employee e(300);
     c=e;     
     getch();
     return 0;    
}


