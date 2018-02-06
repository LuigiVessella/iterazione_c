#include<stdio.h>
int main(){
	int num, i, a ,s, cont;

	do{
		printf("Inserisci numero dispari (1-19): ");
		scanf("%d", &num);
	}while(num>19 || num<1 || num%2==0);

	cont=num/2;

	for(i=1; i<=num; i=i+2){
		for(s=cont; s>0; s--){
			putchar(' ');
		}
		cont--;
		for(a=0; a<i; a++){
			putchar('*');
		}
		putchar('\n');
	}

	i=0;
	a=0;
	cont=num/2;

	for(i=num-2; i>0; i=i-2){
		for(s=cont; s<=num/2; s++){
			putchar(' ');
		}
		cont--;
		for(a=i; a>0; a--){
			putchar('*');
		}
		putchar('\n');
	}
	
return 0;
}
