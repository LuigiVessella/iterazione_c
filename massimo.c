#include<stdio.h>

int main(){
 
   int num=0, max, i=0;

  printf("Inserisci numero: ");
  scanf("%d",&num);
  max = num;
   while(i<9){
	   printf("Inserisci numero: ");
	   scanf("%d", &num);
	   if(num>max){
		   max=num;
	   }
	   i++;
   }
printf("Il massimo e' %d\n", max);

return 0;

   }





