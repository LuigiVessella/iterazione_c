#include<stdio.h>

int main(){

  int num, i;
  int fatt=1;
  printf("Inserisci numero: ");
  scanf("%d",&num);
  printf("%d!\n",num);

  for(i=num; i>0; i--){
       fatt=fatt*i;

      }
   printf("%d\n", fatt);       
      

return 0;
}
