#include<stdio.h>

int main(){
 
  
 int num;
 int a,b,c,d;
 int modulo;
 
 do{
     printf("Inserisci un numero di 4 cifre: ");
     scanf("%d",&num);
 }while(num<=999 || num >9999);

 modulo=num%10;
 d=(modulo+7)%10;

 num=num/10;
 modulo=num%10;
 c=(modulo+7)%10;

 num=num/10;
 modulo=num%10;
 b=(modulo+7)%10;

 num=num/10;
 modulo=num%10;
 a=(modulo+7)%10;

 printf("Il numero criptato e': %d%d%d%d\n",c,d,a,b);

  return 0;
}
