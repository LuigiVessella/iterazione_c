#include<stdio.h>

int main(){
  
  int lato, b=0, c=0, d=0;

  do{
    printf("Inserisci lato: ");
    scanf("%d",&lato);
  }while(lato<1 || lato>20);

  while(b<lato){
    printf("*");
    b++;
  }
   printf("\n"); 
  while(c<lato-2){
    printf("*");
    d=0;
    while(d<lato-2){
      printf(" ");
      d++;
    }
    printf("*\n");
    c++;
  }
  d=0;
 while(d<lato){
      printf("*");
      d++;
 }
 printf("\n");


  return 0;
}
