/*
  File handlinng demo1:
       Write to file
*/
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
   ofstream outfile;
   outfile.open("my.txt", ios::out);
   if(!outfile.is_open())
   {
      cout<<"File not opened!!"<<endl;                      
      getch(); return 0; 
   }    
   outfile<<"C++ is interesting!!"<<endl;
   outfile<<"Board exam is coming!!"<<endl;
   cout<<"File written successfully!"<<endl;
   getch(); return 0;  
}
