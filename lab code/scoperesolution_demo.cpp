//Scope resolution

#include <iostream>
#include <conio.h>

using namespace std;

int count = 0;
//:: scope resolution operator is used to qualify hidden names
// so that these hidden names can still be used.
int main()
{
  int count=0;
  count = 1; //accessing local variable count
  cout<<"Local count : "<<count<<endl;
  ::count = 2; //accessing global count using scope resolution operator
  cout<<"Global count : "<<::count<<endl;

  getch();
  return 0; 
}
