//WAP in C++ that counts total digits, letters
// and other special characters in a string

/*
  NAMESPACE:
            It allows to groups entities under a name. 
            In this way a global scope can be divided into sub
            scopes, each one with its own name.
            An entity inside a namespace may be class, object,
            function or variable.
            
            The functionality of namespaces is especially 
            useful in the case that there is a possibility 
            that a global object or function uses the same
            identifier as another one, causing redefinition 
            errors.
  
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

namespace digit{
  int count = 0;        
};

namespace character{
  int count = 0;        
};

namespace others{
  int count = 0;        
};
//:: scope resolution operator
int main()
{
  char word[]= "1.Israel2.Nepal3.Mexico";
  int i =0;
  char c = word[i];
  while(c!='\0'){
      if(isdigit(c)) digit::count++;
      else if(isalpha(c))   character::count++;
      else others::count++; 
      i++;
      c=word[i];    
  }
  
  std::cout<<"Digits: "<<digit::count<<endl
      <<"Letters: "<<character::count<<endl
      <<"Others: "<<others::count<<endl;
  getch();
  return 0; 
}
