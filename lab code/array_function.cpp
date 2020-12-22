//passing array to function

#include <iostream>
#include <conio.h>

using namespace std;

int add(int[]);
int sum(int*);

int main()
{
   int a[5]={100,200,300,400,500};
   int result = add(a);
   cout<<"Sum: "<<result<<endl;
   result = sum(a);
   cout<<"Sum: "<<result<<endl;
   getch();
   return 0;
}

int add(int list[])
{
   int s=0, i;
   for(i=0;i<5;i++)
   {
      s=s+list[i];                
   }
   return s;
}

int sum(int* p)
{
   int s=0, i;
   for(i=0;i<5;i++)
   {
      s=s+ *(p+i);                
   }
   return s;
}



