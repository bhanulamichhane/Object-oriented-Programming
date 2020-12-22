#include <stdio.h>
#include <conio.h>
#include <math.h>
struct point
{
  int x;
  int y;       
};

struct point init();
float computedistance(struct point, struct point);

int main()
{
   struct point p1,p2;
   float d;
   p1=init();
   p2=init();
   d=computedistance(p1,p2);
   printf("\nDistance : %f", d);
   getch(); return 0;      
}

struct point init()
{
   struct point p;
   printf("\nEnter x coordinate of point:\n");
   scanf("%d", &p.x);
   printf("\nEnter y coordinate of point:\n");
   scanf("%d", &p.y);
   return p;
}

float computedistance(struct point p1, struct point p2)
{
   int t1, t2, sum;
   float s;
   t1=(p2.x-p1.x) * (p2.x-p1.x);
   t2=(p2.y-p1.y) * (p2.y-p1.y);
   sum=t1+t2;
   s = sqrt(sum);
   return s;
}



