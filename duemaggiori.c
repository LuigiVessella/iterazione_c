#include<stdio.h>

int main(){
int num=0, i=0, max, max2=0;

  printf("Inserisci numero: ");
  scanf("%d",&max);
  printf("Inserisci numero: ");
  scanf("%d", &max2);
  
  while(i<8){
	  printf("Inserisci numero: ");
	  scanf("%d", &num);
          if(num>=max){
	       max2 = max;
	       max=num;

	  }
	  
	  else if(num>=max2) 
		  max2=num;
	 
i++;
  }
 printf("Il maggiore e' %d\n ", max);
 printf("Il secondo maggiore e' %d\n ", max2);

return 0;
}


