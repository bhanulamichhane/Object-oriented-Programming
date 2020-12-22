//multiple inheritance
/*
         A       B    
         |       | 
          -------
             |
             C
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Staff
{
   int sid;      
   public:
       void getstaffdata(){
          cout<<"Enter Staff ID:"<<endl;
          cin>>sid;     
       }   
       void displaystaff()
       {
          cout<<"Staff ID: "<<sid<<endl;
       }     
};

class Teacher
{
   int tid;      
   public:
       void getteacherdata(){
          cout<<"Enter Teacher ID:"<<endl;
          cin>>tid;     
       }   
       void displayteacher()
       {
          cout<<"Teacher ID: "<<tid<<endl;
       }     
};

class TeachingAssistant: public Staff, public Teacher
{
   int th_id;      
   public:
       void getdata(){
          getstaffdata();
          getteacherdata();  
          cout<<"Enter Teaching Assistant ID:"<<endl;
          cin>>th_id;     
       }   
       void display()
       {
          displaystaff();
          displayteacher();
          cout<<"Teaching Assistant ID: "<<th_id<<endl;
       }     
};

int main()
{
     TeachingAssistant ta;
     ta.getdata();
     ta.display();
     getch();
     return 0;    
}


