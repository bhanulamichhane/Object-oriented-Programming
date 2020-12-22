//Default arguments
/*
   They are those arguments of a function
   which get default initial value during 
   function declaration. Default arguments
   are provided from right towards left in
   the argument list of function.

*/

#include <iostream>
#include <conio.h>
using namespace std;
int div1(int a, int b=2);

int main()
{
    int x=10, y=4, res;
    
    res=div1(x,y);
    cout<<"res: "<<res<<endl;
    
    res=div1(y);
    cout<<"res: "<<res<<endl;    
    getch();
    return 0;   
}

int div1(int a, int b){
   return a/b;
}






