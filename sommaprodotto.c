#include<stdio.h>

int main(){
      
 int somma=0,prodotto=1;
 int i;
 for(i=2; i<=30; i+=2){

       somma+=i;
 }

 for(i=1; i<=15; i+=2){

      prodotto=prodotto*i;
 }
 

printf("Somma: %d Prodotto: %d\n", somma,prodotto);
  return 0;
}
