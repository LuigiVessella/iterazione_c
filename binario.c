#include<stdio.h>

int main(){

	
 int numb;/*numero binario*/
 int numd=0;/*numero decimale*/
 int molt=1,i=0,ver;
        
        
      
 
         do{
       	 printf("Inserisci numero binario: ");
         scanf("%d",&numb);       
                 
                 	 
                 do{
                 i=numb%10;
	 	 ver=1;	 
	 
	 	 if(i==0 || i==1){
                        ver=0;
                        numb/=10;
                        numd=numd+(i*molt);
                        molt*=2;      	   
	  	   }
                    
      	       	 }while(ver==0 && numb>0);
	 }while(ver==1);/*ver verifica che il numero inserito sia effettivamente binario*/     
 
printf("Il numero in decimale e': %d\n", numd);
return 0;
}

