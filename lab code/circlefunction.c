/*
  WAP in C that takes radius of a circle
  as input and uses function to compute it's area 
  and circumference.
  
INPUT                  OUTPUT
------                 ------
Enter radius:          Area of cirlce: 3.14*5*5
5                      Circumference of circle: 2*3.14*5  

*/

#include <stdio.h>
#include <conio.h>
#define PI 3.14

float area(float);
float circumference(float);

int main()
{
   float radius, a, c;
   printf("\nEnter radius of circle:\n");
   scanf("%f", &radius);
   a = area(radius);
   c = circumference(radius);
   printf("\n\nArea: %f\n\n", a);
   printf("\n\nCircumference: %f\n\n", c);
   getch(); return 0;
}

float area(float r){ return PI*r*r; }

float circumference(float r){ return 2*PI*r; }



















