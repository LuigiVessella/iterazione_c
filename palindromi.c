#include<stdio.h>

int main(){

	int num;
	int modulo;
        int a,b,c,d;

	do{
	   printf("Inserisci un numero: ");
	   scanf("%d", &num);
	}while(num<=9999 || num > 99999);
       
	 modulo = num%10;
	 d = modulo;

	 num=num/10;
	 modulo=num%10;
	 c=modulo;

	 num=num/100;
	 modulo = num%10;
	 b=modulo;

	 num=num/10;
	 modulo = num%10;
	 a=modulo;

	 if(a==d && b==c) printf("Il numero e' palindromo.\n");
		
	 else printf("Il numero non e' palindromo.\n");
            
	return 0;
}
