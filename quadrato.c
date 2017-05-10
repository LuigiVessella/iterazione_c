#include<stdio.h>

int  main(){
int lato,r=0, c=0;

do{
	printf("Numero asterischi: ");
	scanf("%d",&lato);
}while(lato<1 || lato>20);
while(r<5){
	c=0;
	while(c<5){
          printf("*");
	  c++;
	}
printf("\n");
r++;
}

return 0;
}
