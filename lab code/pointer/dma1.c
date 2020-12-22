//Dynamic Memory Allocation

int main()
{
  int *p, *q;
  int n, i;
  printf("\nHow many elements need to be entered?");
  scanf("%d", &n);
  p = (int*) malloc(n*sizeof(int));
  for(i=0; i<n; i++)
  {
      *(p+i) = i;
      printf("Address: %u\t Value: %d\n", (p+i), *(p+i));
  }
  
  p = (int*) realloc(p, (n/2)*sizeof(int));
  printf("\n\nAfter realloc():\n\n");
  for(i=0; i<n; i++)
  {
      printf("Address: %u\t Value: %d\n", (p+i), *(p+i));
  }
  
  getch();
  return 0;  
}
