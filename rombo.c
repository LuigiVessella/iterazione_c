#include<stdio.h>
int main(){
  int num=0, riga, colo=1, spazi=0;

  do{
  printf("Inserisci numero di righe(dispari 1-19): ");
  scanf("%d", &num);
  }while(num%2==0 || num>19);

  for(riga=1; colo<=num/2; colo++){
    putchar(' ');
  }
   putchar('*');
   
   for(riga=1; colo<=num; colo++){
     putchar(' ');
}
for(riga=2; riga<=num/2+1; riga++){
  for(colo=0; colo<=riga; colo++){
    putchar(' ');
  }
  putchar('*');
  

return 0;
}
