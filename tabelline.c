#include <stdio.h>

int main()
{
  int r,c;
	       
  r=1;
  while (r <= 10) {

  c = 1;
  while (c <= 10) {
	 printf("%d\t", r*c);
         c++;  
  }
  printf("\n");
  r++;
  }
  return 0;
}
