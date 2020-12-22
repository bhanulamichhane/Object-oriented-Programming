/*
  File handlinng demo1:
       Read from file
*/
#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
   ifstream infile;
   infile.open("my.txt", ios::in);
   if(!infile.is_open())
   {
      cout<<"File not opened!!"<<endl;                      
      getch(); return 0; 
   }    
   char c[50];
   /*infile.getline(c,21);
   cout<<c;
   infile.getline(c,23);
   cout<<endl<<c;
   */
   
   while(!infile.eof())
   {
       infile.getline(c,50);
       cout<<c<<endl;               
   }
   getch(); return 0;  
}
