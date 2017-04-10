#include<stdio.h>

int main()
{
  int num;

  printf("Inserisci un numero intero: ");
  scanf("%d", &num);

  while(num > 0) {
    printf("%d\n", num);
    num--;
  }

  return 0;
}
