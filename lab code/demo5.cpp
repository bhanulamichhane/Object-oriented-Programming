/*
  File handling demo3:
       random file access
         -tellp() - gives current position of file pointer
         -tellg() -  "
         -seekp(no of bytes, position) - jump to a place after "no of bytes" from the current position of file pointer 
         -seekg(no of bytes, position) - "
*/
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
   fstream out;
   out.open("3.txt",ios::out);
   cout<<out.tellp()<<endl;
   out<<"I am feeling sleepy!!";
   cout<<out.tellp()<<endl;
   out.seekg(2,ios::beg);
   out<<"am a good student!!";
   out.close();
   
   out.open("3.txt", ios::in);
   out.seekg(2,ios::beg);
   char c;
   out.get(c);
   cout<<c;
   cout<<endl<<out.tellg()<<endl;
   out.seekg(5,ios::cur);
   char c1[50];
   out.seekg(-3,ios::cur);
   out.get(c1,40);
   cout<<c1;
   cout<<endl<<out.tellg()<<endl;
   out.close();
   
   getch();
   return 0;
}
