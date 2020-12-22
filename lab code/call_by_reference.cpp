/*
 Function call by reference demo
*/

#include <iostream>
#include <conio.h>

using namespace std;

void exchange(int&, int&);

int main()
{
   int a=10, b=5;
   cout<<"Before calling exchange(): "<<endl;
   cout<<"a: "<<a<<"\tb: "<<b<<endl;
   exchange(a,b);
   cout<<"After calling exchange(): "<<endl;
   cout<<"a: "<<a<<"\tb: "<<b<<endl;
   getch(); return 0;       
}

void exchange(int& p, int& q)
{
  int temp;
  temp=p;
  p=q;
  q=temp;     
}



