#include<stdio.h>

int main(){
 
 float pig1,tot=0;
 int num,i;
 float div= 3.0;

 printf("Quanti termini vuoi utilizzare: ");
 scanf("%d", &num);

 pig1=4.0-(4.0/div);
 tot=pig1;

 for(i=1; i<=num; i++){
    div+=2.0;
  
    if(i%2 == 0)
        tot=tot-(4.0/div);
    else
        tot=tot+(4.0/div);
}

printf("Approssimato: %f\n", tot);


return 0;
}