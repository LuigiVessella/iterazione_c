#include<stdio.h>

int main(){

	
 int numb;/*numero binario*/
 int numd=0;/*numero decimale*/
 int molt=1,i=0,ver=0;
        
        
      
 
         do{
       	 printf("Inserisci numero binario: ");
         scanf("%d",&numb);       
                      
                 while(numb>0){
                 i=numb%10;   
	         if(i==0 || i==1){
                        ver=0;
                        numb/=10;
                        numd=numd+(i*molt);
                        molt*=2;
	            }

                    else
                     {
                       ver=1;  
	               break;
                      }

                       }
	 }while(ver==1);
 
printf("Il numero in decimale e': %d\n", numd);
return 0;
}

