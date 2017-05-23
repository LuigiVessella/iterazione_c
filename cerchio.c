#include<stdio.h>

int main(){

float raggio;
float circo=0.0, area=0.0;

do{		
	printf("Inserisci raggio: ");
	scanf("%f", &raggio);
         if(raggio<=0){
	     printf("Non puoi inserire un numero <= di 0\n");
         	}	       
	}while(raggio<=0);

  area= raggio*raggio*3.14;
  circo=2.0*raggio*3.14;
  printf("Lunghezza circonferenza: %.2f\nArea: %.2f\n",circo, area);
  
  return 0;
}
