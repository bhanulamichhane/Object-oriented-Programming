//Exception Handling demo3
//Restrictions in exception handling
#include <iostream>
#include <conio.h>
using namespace std;

void div1(int a, int b) throw (int, char)
{
       if(a==b)
         throw 'b';
       else
          cout<<"a/b: "<<(a/(a-b))<<endl;
     
}
int main()
{
    try
    {
        div1(20,20);  
    }
    catch(char j)
    {
      cout<<"Division by zero !!"<<endl;           
    }
    cout<<"END"<<endl;
    getch();
    return 0;      
}
