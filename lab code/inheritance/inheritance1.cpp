//Inheritance in C++
/*
Inheritance is the process of creating new classes by
extending existing classes so that shared attributes
and behaviors of classes are defined or mentioned
only once in common existing class and reused in
sub classes.

Base class is the class that contains shared
characteristics/behaviors and a child/derived/sub class
is a class the is derived/inherited  from the 
base class.

*/
#include <iostream>
#include <conio.h>
using namespace std;
class Person
{
  public:
     void walk(){cout<<"Person can walk()"<<endl;}
     void talk(){cout<<"Person can talk()"<<endl;}      
};

class Footballer:public Person
{
     public:
        void playfootball(){cout<<"footballer plays football()"<<endl;}        
};

class Businessman:public Person
{
     public:
        void doBusiness(){cout<<"Businessman does business()"<<endl;}        
};

class Student:public Person
{
     public:
        void study(){cout<<"Student studies()"<<endl;}        
};


int main()
{
    Footballer f1;
    f1.walk();
    f1.talk();
    f1.playfootball();
    getch(); return 0;    
}
