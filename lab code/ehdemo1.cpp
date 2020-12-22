//Exception Handling demo1
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, d;
    int c[5]={100,200,300,400,500};
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;
    int res;
    try
    {
       if(a==b)
       {
         throw 'f';       
       }
       else
       {
           res = a/(a-b);
           cout<<"res: "<<res<<endl;
       }
       cout<<"Enter an index:";
       cin>>d;
       if(d>4){
          throw 12;        
       }
       else
       {
          cout<<c[d]<<endl;    
       }
       
    }
    catch(char x)
    {
       cout<<"Divison by zero !!"<<endl;     
    }
    catch(int g)
    {
      cout<<"Array Index out of bounds !!"<<endl;           
    }
    
    cout<<"END"<<endl;
    getch();
    return 0;    
    
    
}
