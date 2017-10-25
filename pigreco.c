#include<stdio.h>

int main(){
 
 float pig,tot=0;
 int num,i,segno=1;
 float div= 3.0;

 printf("Quanti termini vuoi utilizzare: ");
 scanf("%d", &num);

 pig=4.0-(4.0/div);
 tot=pig;

 for(i=1; i<=num-2; i++){
    div+=2.0;
    segno*=-1;
    tot=tot-((4.0/div)*segno);
   
}

printf("Approssimato: %f\n", tot);


return 0;
}
