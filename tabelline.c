#include <stdio.h>

int main()
{
  int r,c;
	       
  r=0;
  while (r < 10) {

  c = 0;
  while (c < 10) {
	 printf("%d\t", r*c);
         c++;  
  }
	
  r++;
  }
  return 0;
}
