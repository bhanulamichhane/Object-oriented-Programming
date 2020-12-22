//NESTED IF statement

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   int age;
   cout<<"Enter age:"<<endl;
   cin>>age;
   if(age>12)
   {
         if(age>19)
         {
              if(age>50)
              {
                 cout<<"Old!"<<endl;       
              }  
              else
              {
                 cout<<"adult!"<<endl;    
              }   
         }
         else
         {
           cout<<"Teenager!"<<endl;  
         }
   }    
   else
   {
     cout<<"Child!"<<endl;    
   }
   cout<<"Bye Bye!"<<endl;
   getch();
   return 0;
}
