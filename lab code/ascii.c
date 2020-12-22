/*
   Each character in english alphabet has some
   ASCII numeric value.
   
   Character          ASCII Value
   ---------          -----------
   a
   b
   c
   .
   .
   z
   
   
*/

int main(){
   char ch = 'a';
   printf("\nCharacter\tASCII Value\n\n");
   printf("\n%c\t\t%d", ch, ch); 
   printf("\n%c\t\t%d", 'b', 'b');
   printf("\n%c\t\t%d", 'c', 'c');
   printf("\n%c\t\t%d", 'z', 'z');
   printf("\n\n");
   printf("\n%c\t\t%d", 'A', 'A');
   printf("\n%c\t\t%d", 'B', 'B');
   printf("\n%c\t\t%d", 'Z', 'Z');
   printf("\n\n");
   printf("\n%c\t\t%d", '0', '0');
   printf("\n%c\t\t%d", '1', '1');
   printf("\n%c\t\t%d", '9', '9'); 
   printf("\n\n");
   printf("\n%c\t\t%d", ' ', ' ');
   printf("\n%c\t\t%d", '\t', '\t');
   printf("\n\n");
   printf("\n%c\t\t%d", '@', '@');
   printf("\n%c\t\t%d", '\"', '\"');   
   getch();   
   return 0;
}


