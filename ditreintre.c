#include<stdio.h>

int main(){

 int i=0, num;

 printf("Inserisci un numero intero: ");
 scanf("%d", &num);

 while(i<5){
   num += 3;
   printf("%d\n", num);
   i++;
   
}




return 0;
}
