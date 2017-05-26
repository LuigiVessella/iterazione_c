#include<stdio.h>
int main(){
 
  int num;
  int a,b,c,d;
  int modulo; 
  do{
 printf("Inserisci numero criptato con l'esercizio cripta.c: ");
 scanf("%d",&num);
  }while(num<=999 || num>9999);
 
 modulo=num%10;
 d=(modulo-7)%10;

  num/=10;
  modulo=num%10;
  c=(modulo-7)%10;

  num/=10;
  modulo=num%10; 
  b=(modulo-7)%10;


  num/=10;
  modulo=num%10;
  a=(modulo-7)%10;


  printf("Il numero decriptato e': %d%d%d%d\n",a,b,c,d);



  return 0;
}
