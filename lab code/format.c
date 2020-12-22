/*
  FORMATTED OUTPUT
  ----------------
  
*/

int main()
{
  float b=394.2467;
  printf("|%e|", b);
  printf("\n|%10.2e|", b); //right justified output, 
                           //minimum width of display area is 10
                           //2 digits after .
  printf("\n|%-10.2e|", b);//left justified output
                           //minimum width of display area is 10
                           //2 digits after .
  getch();    
}
