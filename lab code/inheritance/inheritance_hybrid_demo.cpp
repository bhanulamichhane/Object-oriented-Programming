/*
 HYBRID INHERITANCE 
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Person
{
      
  private:
     int pid;
     char *name;
  public:
     Person(int id, char *name1){
        pid=id;
        name=name1;           
     }
     
     Person(){}
  
     void getdata(){
       name = new char[40];
       cout<<"Enter ID and name of person:"<<endl;
       cin>>pid>>name; 
     } 
       
     void display(){
       cout<<"Person details: "<<endl;
       cout<<"Name: "<<name;
       cout<<"ID: "<<pid;     
     }
};

class Employee: public virtual Person
{ 
  private:
     char* designation;
  public:
     Employee(int id, char *name1, char* designation1)
     :Person(id,name1)
     {             
        designation = designation1;            
     }
     
     Employee(){}
     void getdata(){  
       designation = new char [40];
       cout<<"Enter designation of employee:"<<endl;
       cin>>designation;    
     } 
      
     void display(){
       cout<<"Employee details: "<<endl;
       cout<<"Designation: "<<designation;     
     }
};

class Student:virtual public Person
{
      
  private:
     char *course;
  public:
     Student(int id, char *name1, char* course1)
     :Person(id,name1)
     {             
        course = course1;            
     }
     Student(){}
     void getdata(){  
       course = new char [40];
       cout<<"Enter course of student:"<<endl;
       cin>>course;     
     } 
       
     void display(){
       cout<<"Student details: "<<endl;
       cout<<"Course: "<<course;     
     }
};

class TeachingAssistant:  public Employee, public Student
{      
  private:
     char *department;
  public:
     TeachingAssistant(int id, char *name1, char* designation, char* crs, char* dept )
     :Person(id,name1), Employee(id,name1, designation), Student(id,name1,crs)
     {             
        department = dept;            
     }
     
     TeachingAssistant(){}
     
     void getdata(){
       Person::getdata();
       Employee::getdata();
       Student::getdata();   
       department = new char [40];
       cout<<"Enter department of teaching assistant:"<<endl;
       cin>>department;     
     } 
       
     void display(){
       Person::display();
       Employee::display();
       Student::display();
       cout<<"Teaching Assistant details: "<<endl;
       cout<<"Department: "<<department;     
     }
};

int main()
{
  TeachingAssistant ta;
  ta.getdata();
  ta.display();
  getch();
  return 0;    
}
