/*
  File handling demo3:
       writing object to file
*/
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
class Employee
{
  char name[50];
  int id; 
  public: 
     void getdata()
     {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter ID: "<<endl;
        cin>>id;        
     }
     void display()
     {
          cout<<"Name: "<<name<<endl;
          cout<<"ID: "<<id<<endl;
               
     }
};

int main()
{
   Employee e;
   e.getdata();    
   ofstream out;
   out.open("2.txt",ios::binary);
   if(!out.is_open())
   {
      cout<<"File not opened!!"<<endl; getch(); return 0;                 
   } 
   out.write((char*)&e, sizeof(e));
   cout<<"Object written to file!!"<<endl;
   getch();
   return 0;
}
