#include<stdio.h>

int main(){

	
 int numb;
 int numd;
 int modulo,molt, i=0, a=1,b=0,c=0;
  
        do{
	 printf("Inserisci numero binario: ");
	 scanf("%d",&numb);

         while(numb>0){
	 modulo=numb%10;
	 i=modulo;
	 b++;
	 /*printf("%d\n",i);*/
          
	 if(i==0 || i==1){
         	 a=0;
	 }
         
         while(c<b){
		 molt=1;
		 numd=numb*molt;
		 molt*=2;
	 }

	 numb=numb/10;
	 }
	 
	 }while(a!=0);
 
printf("%d\n", numd);
return 0;
}

