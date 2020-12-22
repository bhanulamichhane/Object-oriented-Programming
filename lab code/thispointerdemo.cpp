/* this pointer */
/*
In C++, the keyword "this" is used to represent an object
that invokes a member funtion.

This is a pointer that points to the object to which this
function was called.

The pointer "this" acts as an implicit argument to all
member functions of the object except the static member 
functions.

There are 2 uses of this pointer:
      
      1) to resolve name conflict between member variable and
        local variable in a method.
      2) to return the invoking object  
*/
/*
#include <iostream>
#include <conio.h>
using namespace std;
class A
{
  private:
    int x;
  public:
    //use of this pointer to resolve name conflict
    void getdata(int x){
      this->x=x;  
    }
    void display(){cout<<"x: "<<x<<endl;}    
};

int main()
{
  A a1;
  a1.getdata(222); 
  a1.display();   
  getch(); return 0;
}
*/

#include <iostream>
#include <conio.h>
using namespace std;
class A
{
  private:
    int x;
  public:
    //use of this pointer to resolve name conflict
    void getdata(int x){
      this->x=x;  
    }
    //use of this pointer to return invoking object
    A isgreater(A a){
      if(x>a.x){
         return *this;          
      }
      else{
         return a;     
      }
    }    

    void display(){cout<<"x: "<<x<<endl;}    
};

int main()
{
  A a1, a2, a3;
  a1.getdata(222); a2.getdata(333);
  a3 = a2.isgreater(a1);
  a3.display();
  getch(); return 0;
}
