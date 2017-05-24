#include<stdio.h>

int main(){
 
 int num;
 int i=0,a=0;
 int modulo;

 do{
 printf("Inserisci un numero: ");
 scanf("%d",&num); 
 }while(num<0);
	
 while(num > 0){
       modulo = num%10;
       i = modulo;
       if(i==7)a++;
       num = num/10;
 }
 printf("%d\n", a);

return 0;
}
