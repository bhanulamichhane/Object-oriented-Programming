/*
  Single inheritance demo
  
  A
  |
  |
  B
  class B is derived from class A
*/

#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
   char *name;
   int roll;
   public:
   Student(char* n, int r){
       name = n;
       roll =r;   
   }      
   
   void display(){
     cout<<"Student details: "<<endl<<"-----------"<<endl;
     cout<<"Name: "<<name<<endl;
     cout<<"Roll: "<<roll<<endl;     
   }   
};

class ForeignStudent: public Student
{
   char *country;
   public:
   ForeignStudent(char *n, int r, char *c):Student(n,r)
   {
      country = c;                    
   }  
   
   void displayforeign(){
      display(); 
      cout<<"Country: "<<country<<endl;   
   } 
       
};

int main()
{
      ForeignStudent fs("Ravi", 100, "Nepal");
      fs.displayforeign();
      getch(); return 0;  
}


