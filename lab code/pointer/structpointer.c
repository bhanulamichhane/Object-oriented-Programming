//pointer to structure

struct rectangle
{
   float length;
   float breadth;       
};

int main()
{
  struct rectangle r1 = {12.0, 34.0};
  struct rectangle *pr1;
  printf("Length: %f\tBreadth: %f\n", r1.length, r1.breadth);
  pr1 = &r1;
  printf("Length: %f\tBreadth: %f", pr1->length, pr1->breadth);
  getch();
  return 0;
  
      
}
