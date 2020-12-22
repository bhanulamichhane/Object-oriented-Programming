//Exception Handling demo3 (Nested exception handling)
#include <iostream>
#include <conio.h>
using namespace std;

void div1(int a, int b)
{

       if(a==b)
         throw 'b';
       else
          cout<<"a/b: "<<(a/(a-b))<<endl;
     
}
int main()
{
    int c[3]={100,200,300};
    try
    {
       div1(23,2);
       try
       {
          int i;
          cout<<"Enter index"<<endl;
          cin>>i;
          if(i>2)
             throw i;
          else
             cout<<c[i];            
       }
       catch(int b)
       {
            cout<<"Array Index out of bounds!!"<<endl;
       }
    }
    catch(char j)
    {
      cout<<"Division by zero !!"<<endl;           
    }
    cout<<"END"<<endl;
    getch();
    return 0;      
}
