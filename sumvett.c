#include<stdio.h>
#define MAX 100
int main(){

float somma=0.0;
float vett[MAX];
float media;
int i;

printf("Inserisci dieci numeri interi:\n ");


for(i=0; i<10; i++){
   printf("? ");
   scanf("%f", &vett[i]);
}

for(i=0; i<10; i++){
    somma+=vett[i];
    printf("numbers[%d] = %f\n", i, vett[i]);
}
media= somma/10;

printf("Somma:%f\nMedia:%f\n", somma, media);

return 0;
}
