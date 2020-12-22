//Exception Handling demo2
#include <iostream>
#include <conio.h>
using namespace std;

void div1(int a, int b)
{

       if(a==b)
         throw b;
       else
          cout<<"a/b: "<<(a/b)<<endl;
     
}
int main()
{
    try
    {
       div1(23,23);
    }
    catch(int j)
    {
      cout<<"Division by zero !!"<<endl;           
    }
    cout<<"END"<<endl;
    getch();
    return 0;      
}
