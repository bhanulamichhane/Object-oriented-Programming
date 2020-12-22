/* Looping structures
   WHILE, FOR, DO-WHILE
*/

#include <iostream>
#include <conio.h>
using namespace std;

void forfunction();
void whilefunction();
void dowhilefunction();
void breakfunction();
void continuefunction();

int main()
{
   forfunction();
   whilefunction();
   dowhilefunction();    
   breakfunction();
   continuefunction();
}

void whilefunction()
{
   int i=1; //initialization
   cout<<"Output of whilefunction():"<<endl;
   while(i<=10) //exit condition
   {
     cout<<"i: " <<i<<endl;   //while body 
     i++; //increment step         
   }     
   cout<<endl<<endl;
   getch();
}

void forfunction()
{
   int i;
   cout<<"Output of forfunction():"<<endl;
   for(i=1; i<=10; i++) //initialization, exit condition
                        //increment/decrement
   {
     cout<<"i: " <<i<<endl;   //while body          
   }     
   cout<<endl<<endl;
   getch();
}

void dowhilefunction()
{
   int i=1; //initialization
   cout<<"Output of dowhilefunction():"<<endl;
   do
   {
     cout<<"i: " <<i<<endl;   //while body
     i++;  //increment        
   } while(i<=10); //exit condition    
   cout<<endl<<endl;
   getch();
}

void breakfunction()
{
   int i=1; //initialization
   cout<<"Output of breakfunction():"<<endl;
   while(i<=10) //exit condition
   {
     if(i==5) return;
     cout<<"i: " <<i<<endl;   //while body 
     i++; //increment step         
   }     
   cout<<endl<<endl;
   getch();
}

void continuefunction()
{
   int i=1; //initialization
   cout<<"Output of continuefunction():"<<endl;
   while(i<=10) //exit condition
   {
     if(i>=5) 
     { 
        i++;     
        continue;
     }
     cout<<"i: " <<i<<endl;   //while body 
     i++; //increment step         
   }     
   cout<<endl<<endl;
   getch();
}
