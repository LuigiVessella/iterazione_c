#include<stdio.h>
#define MAX 10
int main(){

int somma=0;
int vett[MAX];
double media;
int i;

printf("Inserisci dieci numeri interi:\n ");


for(i=0; i<10; i++){
   printf("? ");
   scanf("%d", &vett[i]);
}

for(i=0; i<10; i++){
    somma+=vett[i];
    printf("numbers[%d] = %d\n", i, vett[i]);
}
media= somma/10.;

printf("Somma:%d\nMedia:%f\n", somma, media);

return 0;
}
