#include<stdio.h>

int main(){
 int i;

 printf("a) ");
 for(i=1; i<=8; i++){
       
	 printf("%d ",i);
 }
 
 printf("\n");
 printf("b) ");
 for(i=3; i<=23; i+=5){

	printf("%d ",i);
 }	

 printf("\n");
 printf("c) ");
 for(i=20;i>=-10; i=i-6){
	 
	 printf("%d ",i);
 }
 
 printf("\n");
 printf("d) ");
 for(i=19; i<=51; i+=8){
         
	 printf("%d ",i);
 }
 printf("\n");

return 0;
}
