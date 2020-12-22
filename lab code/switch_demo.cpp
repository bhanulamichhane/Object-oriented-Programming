//SWITCH statement

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
  
  char day;
  cout<<"Enter day of week!"<<endl;
  cin>>day;
  switch(day)
  {
      case '1' : cout<<"Sunday!"; break;
      case '2' : cout<<"Monday!"; break;
      case '3' : cout<<"Tuesday!"; break;   
      case '4' : cout<<"Wednesday!"; break;
      case '5' : cout<<"Thursday!";  break;
      case '6' : cout<<"Friday!";   break;
      case '7' : cout<<"Saturday!"; break;
      default: cout<<"Invalid day.. enter [1-7]!!" ;
  }    
  getch(); return 0;
}
