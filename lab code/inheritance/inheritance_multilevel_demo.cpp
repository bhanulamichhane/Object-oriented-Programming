//multilevel inheritance
/*
         A           
         |        
         B 
         |
         C
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Vehicle
{
   char *color;      
   public:
       Vehicle(char *c){color=c;}
       void displayvehicle()
       {
          cout<<"Vehicle Color: "<<color<<endl;
       }     
};

class FourWheeler: public Vehicle
{
   int capacity;      
   public:
       FourWheeler(int c, char* cl):Vehicle(cl)
       {
          capacity = c;
       } 
       void displayfourwheeler()
       {
          displayvehicle();
          cout<<"Capacity: "<<capacity<<endl;
       }     
};

class Car: public FourWheeler
{
   char *model;
   public:
       Car(char *m, int cp, char*cl):FourWheeler(cp,cl)
       {
          model=m;
       }
       void displaycar()
       {
          displayfourwheeler();
          cout<<"Car model: "<<model<<endl;
       }     
};

int main()
{
     Car c("sedan",5,"blue");
     c.displaycar();
     getch();
     return 0;    
}


