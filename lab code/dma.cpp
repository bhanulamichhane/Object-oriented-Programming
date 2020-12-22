/*Dynamic Memory Allocation in C++

  - In C programming following functions are used for DMA
     malloc(), calloc(), realloc()
  - In C++, following operators are used for DMA
     new - for allocation of memory
     delete - for deallocation of memory
     
  BENEFITS OF DMA in C++ over DMA in C using malloc()
  ----------------------------------------------------
  1) No typecasting is required in contrary to malloc in C
  2) The size of data objects is computed automatically -
  use of sizeof() operator not necessary.
  3) It is possible to initialize the data object while 
     creating memory space
  4) new and delete operators can be overloaded
     
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int *p, *q, n;
  cout<<"Enter number of integers that need to be stored:"
      <<endl;
  cin>>n;
  p = new int[n];
  q = new int;
  if(!q)
  {
    cout<<"Dynamic memory allocation not possible for q!!"<<endl;
    getch();
    return 0;      
  } 
  else {
    *q = 1002;  
    cout<<"*q: "<<*q<<endl;   
  }
  
  int i=0;
  
  if(!p){
    cout<<"Dynamic memory allocation not possible for array!!"<<endl;
    getch();
    return 0;           
  }
  else
  {
         for(;i<n;i++)
         {
             p[i]=i+1; 
         }
         
         for(i=0;i<n;i++)
         {
             cout<<p[i]<<endl;
         }
         getch();
  }
  
  delete q;
  delete []p;
  getch();
  return 0;
      
}
