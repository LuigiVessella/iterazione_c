#include<stdio.h>

int main(){

 int i=0, num;

 printf("Inserisci un numero intero: ");
 scanf("%d", &num);

 while(i<5){
   printf("%d\n", num);
   num+=3;
   i++;
}

return 0;
}
