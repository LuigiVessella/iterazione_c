#include<stdio.h>
int main(){
 
  int num;
  int a,b,c,d;
  int modulo; 
 
 printf("Inserisci numero criptato con l'esercizio cripta.c: ");
 scanf("%d",&num);
 
 
 modulo=num%10;
 d=(modulo+3)%10;

  num/=10;
  modulo=num%10;
  c=(modulo+3)%10;

  num/=10;
  modulo=num%10; 
  b=(modulo+3)%10;


  num/=10;
  modulo=num%10;
  a=(modulo+3)%10;


  printf("Il numero decriptato e': %d%d%d%d\n",c,d,a,b);



  return 0;
}
