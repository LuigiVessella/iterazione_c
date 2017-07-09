#include<stdio.h>

int main(){

	
 int numb;/*numero binario*/
 int numd;/*numero decimale*/
 int numf=0;/*appoggio*/
 int modulo,molt=1, i=0, a=1,b=0;
        
        /*acquisizione*/
        do{
	 printf("Inserisci numero binario: ");
	 scanf("%d",&numb);
         numf=numb;
         


	   while(numb>0){
	   modulo=numb%10;
	   i=modulo; 
	         if(i==0 || i==1){
         	        a=0;
		        b++;
	               }
         
                 while(b>0){
		      modulo=numf%10;
		      numf/=10;
		      numd=numd+(modulo*molt);
		      molt*=2;
		      b--;
	             }

	 numb=numb/10;
	 }
	 
	 }while(a!=0);
 
printf("Il numero in decimale e': %d\n", numd);
return 0;
}

