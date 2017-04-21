#include<stdio.h>

int main(){
  int num=0, i=0, max, max2;

  max=num;
  while(i<10){
	  printf("Inserisci numero: ");
	  scanf("%d", &num);
          if(num>max){
		 max=num;
	  }
	  
	 if(max2<max){
		 max2=num;
	 }
i++;
  }
 printf("Il maggiore e' %d\n ", max);
 printf("Il secondo maggiore e' %d\n ", max2);

return 0;
}


