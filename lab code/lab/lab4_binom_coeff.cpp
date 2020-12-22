#include <iostream>
#include <conio.h>
using namespace std;
int fact(int);
int binomialcoeff(int,int);
void pascaltriangle();


/*int main(){
   int n,k,res;
   cout<<"Enter n and k: "<<endl;
   cin>>n>>k; 
   if(k<0 || n<0){
       cout<<"0<=k<=n! Either n or k is -ve!! "<<endl;
       getch(); return 0;       
   }
   if(k>n){
      cout<<"0<=k<=n! enter some k <=n !!"<<endl;
      getch(); return 0;        
   }
   
   res = binomialcoeff(n,k);
   
   cout<<"Binomial Coefficient of "
       <<n<<" and "<<k<<": "<<res<<endl;
   
   getch(); 
   return 0;
}
*/


int main()
{
   pascaltriangle();
   getch(); return 0;    
}




int fact(int n){
   int res =1;
   for(;n>0;n--)
   {
      res = res*n;          
   }
   return res;    
}

int binomialcoeff(int n, int k)
{
   int res;
   res = fact(n)/(fact(n-k)*fact(k));
   return res;    
}

void pascaltriangle()
{
     
   int i, j;
   
   for(i=0;i<7;i++)
   {
      for(j=0;j<=i;j++)
      {
         cout<<binomialcoeff(i,j)<<" ";                 
      }                
      cout<<endl;
   }
        
}












