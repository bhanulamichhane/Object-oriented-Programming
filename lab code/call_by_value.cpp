/*
 Function call by value demo
*/

#include <iostream>
#include <conio.h>

using namespace std;

float si(float p, float t, float r);

int main()
{
   float p=100000.0, t=3.0, r=12.5, interest;
   interest = si(p,t,r);
   cout<<"Principal: "<<p
       <<"\tTime: "<<t
       <<"\tRate: "<<r
       <<endl;
   cout<<"\n\nSimple Interest: "<<interest<<endl; 
   getch(); return 0;       
}

float si(float p, float t, float r)
{
   return (p*t*r)/100.0;      
}



