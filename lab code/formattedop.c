int main()
{
   int i=123, n=0452, h=0x23d;
   float x=12.0, y=-3.3;
   
   printf("|%6d %7.0f %10.1e|\n\n", i,x,y);
   printf("|%-6d %-7.0f %-10.1e|\n\n", i,x,y);
   printf("|%+6d %+7.0f %+10.1e|\n\n", i,x,y);
   printf("|%-+6d %-+7.0f %-+10.1e|\n\n", i,x,y);
   printf("|%-7.0f %#7.0f %7g %#7g|\n\n", x,x,y,y);
   printf("|%012d|\n\n", i);
   printf("|%o|\n\n", n);
   printf("|%#x|\n\n", h);
   
   getch();    
    
}
