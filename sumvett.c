#include<stdio.h>
#define MAX 10
int main(){

double somma=0.0;
double vett[MAX];
double media;
int i;

printf("Inserisci dieci numeri:\n ");


for(i=0; i<10; i++){
   printf("? ");
   scanf("%lf", &vett[i]);
}

for(i=0; i<10; i++){
    somma+=vett[i];
    printf("numbers[%d] = %lf\n", i, vett[i]);
}
media= somma/10;

printf("Somma:%lf\nMedia:%lf\n", somma, media);

return 0;
}
