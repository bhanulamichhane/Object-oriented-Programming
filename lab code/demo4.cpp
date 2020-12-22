/*
  File handling demo3:
       read object from file
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
   ifstream in;
   in.open("2.txt",ios::binary);
   if(!in.is_open())
   {
      cout<<"File not opened!!"<<endl; getch(); return 0;                 
   } 
   in.read((char*)&e, sizeof(e));
   e.display();
   getch();
   return 0;
}
