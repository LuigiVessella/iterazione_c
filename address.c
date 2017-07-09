#include<stdio.h>
#define MAX 10
int main(){

int vett[MAX];
int *p_num;
int i;

printf("Inserisci dieci numeri interi:\n ");

for(i=0; i<MAX; i++){
    printf("? ");
    scanf("%d", &vett[i]);
    p_num=&vett[i];
    printf("Indirizzo di num[%d]: %p\n",i, p_num);
}


return 0;
}
